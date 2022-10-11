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
        double height;
        double weight;
        string haircolor;
    public:
        static int numOfHumans;
        Human(double height, double width);
        Human(string haircolor);
        Human();

        virtual ~Human();

        void setHeight(double height);
        double getHeight();

        void setWeight(double weight);
        double getWeight();

        static int getNumOfHumans();
    private:
};

#endif