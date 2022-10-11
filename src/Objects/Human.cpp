#include "Human.h"

Human::Human(string name, double height, double weight, string haircolor) {
    this->name = name;
    this->height = height;
    this->weight = weight;
    this->haircolor = haircolor;
}
Human::~Human() = default;


string Human::getName() {
    return this->name;
}
double Human::getHeight() {
    return this->height;
}
double Human::getWeight() {
    return this->weight;
}
string Human::getColor() {
    return this->haircolor;
}

void Human::setName(string name) {
    this->name = name;
}
void Human::setHeight(double height) {
    this->height = height;
}
void Human::setWeight(double weight) {
    this->weight = weight;
}
void Human::setColor(string color) {
    this->haircolor = color;
}