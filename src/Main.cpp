#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <ctime>
#include <limits>
#include "Car.cpp"

using namespace std;

const double PI = 3.141;

int main() {
	

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
	cout << "Substring: " << str4.substr(4, 10) << endl;

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str4 << endl;

	string bsp = "test";
	cout << "Address of Variable bsp: " << &bsp << endl;

	Car bmw = Car("BMW", "Schwarz", 143);
	cout << "Marke: " << bmw.getMarke() << endl;
	cout << "Farbe: " << bmw.getFarbe() << endl;
	cout << "PS: " << to_string(bmw.getPS()) << endl;
	cout << "Neuwagen: " << (bmw.isNew() ? "Ja" : "Nein") << endl;
	cout << "Kilometerstand: " << bmw.getKM() << endl;

	bmw.drive();
	bmw.drive();
	bmw.drive();

	cout << "Neuwagen: " << (bmw.isNew() ? "Ja" : "Nein") << endl;
	cout << "Kilometerstand: " << bmw.getKM() << endl;
	
	string t;
	cout << "Input to end application..";
	cin >> t;

	return 0;
}
