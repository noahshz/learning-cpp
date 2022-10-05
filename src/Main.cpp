#include <iostream>

using namespace std;

const double PI = 3.141;

int main(int argc, char** argv) {
	cout << "Hello World :)" << endl;

	// data types
	short int i1 = 1;			// -32768 - +32767
	int i2 = 50000;			// -2147483648 - +2147483647
	long int i3 = 7886669669;	// -9223372036854775808 - +9223372036854775807
	cout << "minimum Integer: " << numeric_limits<int>::min() << endl;
	cout << "maximum Integer: " << numeric_limits<int>::max() << endl;

	float f1 = 1.2;				// 1.17549e-38 - 3.40282e+38

	double d1 = 3.50;			// 2.22507e-308 - 1.79769e+308
	long double d2 = 2.1;		// 3.621e-4932 - 1.18973e+4932

	char grade = 'A';
	string name = "Noah";

	bool alive = true;

	auto whatAmI = "test";


	// user input
	int num1, num2;
	cout << "Enter a Number: ";
	cin >> num1;
	cout << "Enter a second Number: ";
	cin >> num2;
	cout << "Result: " << num1 + num2;

	printf("These were youre input numbers: %d & %d", num1, num2);


	// conditions
	int age;
	cout << "Enter age: ";
	cin >> age;

	if (age >= 18) {
		cout << "volljährig";
	}
	else {
		cout << "minderjährig";
	}

	return 0;
}
