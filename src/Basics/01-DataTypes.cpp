#include <iostream>
#include <string>

int main() {
    // Integers
    short int i_short = 100;		        // -32768 - +32767
	int i_int = 5111340;			        // -2147483648 - +2147483647
	long long int i_long = 17886669669;	    // -9223372036854775808 - +9223372036854775807

    // Floats
    float f_short = 0.1;                    // 1.17549e-38 - 3.40282e+38

    // Doubles
    double d_double = 3.50;			        // 2.22507e-308 - 1.79769e+308
	long double d_long = 2.1;		        // 3.621e-4932 - 1.18973e+4932

    // Char & String
    char c = 'N';
    std::string str = "Hello World :)";

    // Boolean
    bool boolean = true;

    // Automatic recognization
    auto whatami = "Is this me?";
    auto iameverything = true;

    return 0;
}