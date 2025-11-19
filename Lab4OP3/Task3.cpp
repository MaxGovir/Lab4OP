#include <iostream>
#include <clocale>
using namespace std;

double pi = 3.14;

int main() {
    
    setlocale(LC_ALL, "Ukrainian");

    
    double pi = 3.0;

    cout << "Глобальна змінна ::pi = " << ::pi << endl;
    cout << "Локальна змінна pi   = " << pi << "\n" << endl;

    
    int iterations = 3; // цикл 3 рази 
    for (int i = 0; i < iterations; ++i) {

        
        static int loopExecutionCounter = 0;
        loopExecutionCounter++;

        cout << "--- Ітерація (static count: " << loopExecutionCounter << ") ---" << endl;

        
        double product = ::pi * pi; 

        
        double* dynamicResult = new double;
        cout << "  - Пам'ять виділено за адресою: " << dynamicResult << endl;

       
        *dynamicResult = product;
        cout << "  - Добуток (::pi * pi) = " << *dynamicResult << endl;
        
        delete dynamicResult;
        
        dynamicResult = nullptr;
    }

    return 0;
}
