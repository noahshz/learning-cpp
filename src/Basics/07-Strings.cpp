#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "This is the first test string.";
    string str2 = str1;
	string str3(str2, 4);
	string str4 = str1 + " with some extra words. And now it is str4.";

	cout << "First char of str1: " << str1[0] << endl;
	cout << "Last char of str1: " << str1.back() << endl;
	cout << "Length of str1: " << str1.length() << endl;

	str4.append("!");
	str4.erase(12, str4.length() - 1);

	cout << "Substring of str 4: " << str4.substr(4, 10) << endl;

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str4 << endl;

    return 0;
}