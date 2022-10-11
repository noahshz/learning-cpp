#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <ctime>
#include <limits>

using namespace std;

int main() {
    
    double num1 = 10, num2 = 0;

    try {
        if(num2 == 0) {
            throw "Devision by Zero";
        } else {
            printf("%.1f / %.1f = %.1f \n", num1, num2, num1 / num2);
        }
    } catch(const char* e) {
        cout << "Error : " << e << endl;
    }

    return 0;
}