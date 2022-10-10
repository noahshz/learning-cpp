#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <ctime>
#include <limits>

using namespace std;

// Prototypes
double addNumbers(double num1, double num2);

int main() {
    printf("%.1f + %.1f = %.1f \n", 5.0, 4.0, addNumbers(5.0, 4.0));
    return 0;
}
// Functions
double addNumbers(double num1 = 0, double num2 = 0) {
    return num1 + num2;
}
