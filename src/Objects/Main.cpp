#include "Human.cpp"
#include <string>
#include <iostream>

using namespace std;

int main() {
    Human mensch = Human("Noah", 183.2, 84.3, "blond");

    cout << "Name: " << mensch.getName() << endl;
    cout << "Größe: " << mensch.getHeight() << endl;
    cout << "Gewicht: " << mensch.getWeight() << endl;
    cout << "Haarfarbe: " << mensch.getColor() << endl;

    string t;
    cin >> t;
}

