#include <iostream>
#include <iomanip> 
#include <clocale>  
using namespace std;


int bitwise_add(int a, int b) {
    
    while (b != 0) {
        
        int carry = (unsigned int)(a & b) << 1;

        a = a ^ b;
        
        b = carry;
    }
   
    return a;
}


bool bitwise_less_than(int a, int b) {

    
    if ((a ^ b) < 0) {
        return a < 0;
    }

    // Рахуємо (-b)
    int neg_b = bitwise_add(~b, 1);

    // Рахуємо (a + (-b))
    int diff = bitwise_add(a, neg_b);

    // Якщо результат (diff) від'ємний, то a < b було істинним
    return diff < 0;
}

int main() {
    
    setlocale(LC_ALL, "Ukrainian");

    
    cout << boolalpha;


    cout << "Перевірка 1 (84 < 83):   " << bitwise_less_than(84, 83) //Операція відношення
        << " (Очікувано: false)" << endl;

    cout << "Перевірка 2 (-77 < -77): " << bitwise_less_than(-77, -77)
        << " (Очікувано: false)" << endl;

    cout << "Перевірка 3 (63 < 127):  " << bitwise_less_than(63, 127)
        << " (Очікувано: true)" << endl;

    cout << "Перевірка 1 (-10 + 12): " << bitwise_add(-10, 12) //Операція додавання

        << " (Очікувано: 2)" << endl;

    cout << "Перевірка 2 (15 + 41):  " << bitwise_add(15, 41)
        << " (Очікувано: 56)" << endl;

    cout << "Перевірка 3 (31 + 32):  " << bitwise_add(31, 32)
        << " (Очікувано: 63)" << endl;

    return 0;
}
