#include <iostream>
#include <iomanip> 
#include <clocale>  
using namespace std;

int main() {
    
    setlocale(LC_ALL, "Ukrainian");

    
    cout << boolalpha;

    cout << "Вираз для обчислення: ! ( ! (A >= B) || ! (C <= D) )\n" << endl;

    
    cout << "--- Набір 1 ---" << endl;

    
    double A1 = 13.7;
    int B1 = 20;
    int C1 = 24;
    int D1 = 16;
    cout << "Дано: A = " << A1 << ", B = " << B1 << ", C = " << C1 << ", D = " << D1 << endl;

    
    bool result1;
    bool part1_1, part2_1, inner_expr1;

    
    part1_1 = !(A1 >= B1); // ! (13.7 >= 20) -> ! (false) -> true
    part2_1 = !(C1 <= D1); // ! (24 <= 16)   -> ! (false) -> true
    inner_expr1 = (part1_1 || part2_1); // (true || true) -> true
    result1 = !inner_expr1; // ! (true) -> false

    cout << "Результат обчислення: " << result1 << "\n" << endl;

    
    cout << "--- Набір 2 ---" << endl;

    
    int A2 = 81;
    int B2 = 81;
    double C2 = 20.3;
    int D2 = 4;
    cout << "Дано: A = " << A2 << ", B = " << B2 << ", C = " << C2 << ", D = " << D2 << endl;

    
    bool result2;
    bool part1_2, part2_2, inner_expr2;

    
    part1_2 = !(A2 >= B2); // ! (81 >= 81)   -> ! (true) -> false
    part2_2 = !(C2 <= D2); // ! (20.3 <= 4)  -> ! (false) -> true
    inner_expr2 = (part1_2 || part2_2); // (false || true) -> true
    result2 = !inner_expr2; // ! (true) -> false

    cout << "Результат обчислення: " << result2 << endl;

    return 0;
}
