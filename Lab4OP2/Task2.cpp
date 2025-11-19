#include <iostream>
#include <iomanip> 
#include <clocale>  
using namespace std;

int main() {
    
    setlocale(LC_ALL, "Ukrainian");

    cout << "--- Завдання 2 (Варіант 3) ---" << endl;

    
    const int A = 167;

    
    int B = -42;
    int E = 15760;

    
    double C_value = 7.27;
    double* C = &C_value; // C тепер зберігає адресу змінної C_value

    
    // "A * 2 + 10" - це R-вираз.
    int r_variable = (A * 2) + 10; // ініціалізація R-виразом
    cout << "1. Константи та змінні:" << endl;
    cout << "   A (константа) = " << A << endl;
    cout << "   B (змінна) = " << B << endl;
    cout << "   C (вказівник) вказує на значення: " << *C << endl;
    cout << "   D (літерал) = 1993" << endl;
    cout << "   E (змінна) = " << E << endl;
    cout << "   F (тип) = char" << endl;
    cout << "2. Змінна, ініційована R-виразом: " << r_variable << endl;


    
    // L-вираз (L-value) - це вираз, що позначає комірку пам'яті (має адресу).
    // "l_variable" - це L-вираз.
    int l_variable; 
    l_variable = 50;  
    cout << "3. Змінна, ініційована L-виразом: " << l_variable << endl;

    
    // Вираз: A ^ ~ B + * C != 1993 - E << sizeof(char)
    
    // Застосовуємо дужки для примусового порядку:
    // 1. Унарні: (~B), (*C), (sizeof(char))
    // 2. Бітові: (A ^ (~B)), (E << (sizeof(char)))
    // 3. Арифметичні: ((A ^ (~B)) + (*C)), (1993 - (E << (sizeof(char))))
    // 4. Відношення: ... != ...

    
    bool result;

    
    result = ((A ^ (~B)) + (*C)) != (1993 - (E << sizeof(char)));

    cout << "\n--- 4. Обчислення виразу ---" << endl;
    cout << "Вираз: ((A ^ (~B)) + (*C)) != (1993 - (E << sizeof(char)))" << endl;
    cout << "Результат обчислення (true/false): " << boolalpha << result << endl;

    return 0;
}
