#include <string>
#include <iostream>

using namespace std;

#ifndef HUMAN_H
#define HUMAN_H


/*
    virtual = wenn in vererbeung später function überschrieben wird
*/

class Human {
    protected:
        string name;
        double height;
        double weight;
        string haircolor;
    public:
        Human(string name, double height, double weight, string haircolor);

        virtual ~Human();

        void setName(string name);
        string getName();

        void setHeight(double height);
        double getHeight();

        void setWeight(double weight);
        double getWeight();

        void setColor(string color);
        string getColor();
    private:
};

#endif