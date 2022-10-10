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
