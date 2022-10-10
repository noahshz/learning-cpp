#include <iostream>

int main() {
    short int age;
    age = 17;

    // If
    if(age > 0 && age < 18) {
        std::cout << "Age between 1 and 17" << std::endl;
    } else {
        std::cout << "Age under 1 or over 17" << std::endl;
    }

    // Switch
    switch (age) {
        case 0:
            std::cout << "Newborn" << std::endl;
            break;
        default:
            std::cout << "Starting Life" << std::endl;
            break;
    }

    return 0;
}