#include <iostream>
#include <limits>

using namespace std;

class Car {
    public:
        Car(string marke, string farbe, short int ps) {
            this->farbe = farbe;
            this->marke = marke;
            this->ps = ps;
        }
        string getMarke() {
            return this->marke;
        }
        string getFarbe() {
            return this->farbe;
        }
        short int getPS() {
            return this->ps;
        }
        int getKM() {
            return this->km;
        }
        bool isNew() {
            return this->new_car;
        }
        void drive() {
            cout << "Driving 5 km forewards..." << endl;
            this->km += 5;
            if(new_car) new_car = false;
        }
    private:
        string farbe;
        string marke;
        short int ps;
        bool new_car = true;
        int km = 0;

};