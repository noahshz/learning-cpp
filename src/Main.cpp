#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <ctime>

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
	cout << "Result: " << num1 + num2 << endl;

	printf("These were youre input numbers: %d & %d \n", num1, num2);


	// conditions
	int age;
	cout << "Enter age: ";
	cin >> age;

	if (age >= 18) {
		cout << "volljährig" << endl;
	}
	else {
		cout << "minderjährig" << endl;
	}

	// arrays
	int nums[10] = { 1 };
	int nums2[] = { 1, 2, 3 };

	cout << "Second Number: " << nums2[1] << endl;
	nums2[1] = 99;
	cout << "New Second Number: " << nums2[1] << endl;

	// multidimensional arrays
	int multiNum[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	cout << "MultiNumber: " << multiNum[0][1] << endl;

	// vectors
	vector<int> vNums(2);
	vNums[0] = 1;
	vNums[1] = 2;
	vNums.push_back(99);
	cout << "Vector size: " << vNums.size() << endl;

	// loops
	// while loop
	int z_1 = 1;
	while (z_1 <= 100) {
		cout << "Round " << z_1 << endl;
		//if (z_1 == 73) continue;
		//if (z_1 == 80) break;
		z_1++;
	}

	vector<string> words;
	stringstream ss("Some Random Words this thing pretty cool");
	string word;

	while (getline(ss, word, ' ')) {
		words.push_back(word);
	}
	// for loop
	for (int i = 0; i < words.size(); i++) {
		cout << words[i] << endl;
	}
	// foreach loop
	int iarr1[] = { 1, 2, 4, 2, 90 };
	for (int x : iarr1) cout << x << endl;
	// do while loop
	int secretNumber = rand() % 11;
	int guess = 0;
	int tries = 0;
	do {
		cout << "Guess the number: ";
		cin >> guess;
		if (guess > secretNumber) cout << "Lower!" << endl;
		if (guess < secretNumber) cout << "Higher!" << endl;
		tries++;
	} while (guess != secretNumber);
	cout << "You guessed the number! You needed " << tries << " tries :)" << endl;

	// strings
	string str1 = "This is the first test string";
	cout << "First char of str1: " << str1[0] << endl;
	cout << "Last char of str1: " << str1.back() << endl;
	cout << "Length: " << str1.length() << endl;
	string str2 = str1;
	string str3(str2, 4);
	string str4 = str1 + " with some extra words";
	str4.append("!");
	str4.erase(12, str4.length() - 1);
	if (str4.find("string") != string::npos) {
		cout << "String index: " << str4.find("string") << endl;
	}


	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str4 << endl;

	return 0;
}
