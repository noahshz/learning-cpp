#include <iostream>
#include <string>

int main() {
    // Input
    std::string name;
    std::cin >> name;

    // Output
    std::cout << "Your name is: " << name << std::endl;
    printf("This is another way to say your name: %s \n", name.c_str());
    return 0;
};