#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <ctime>
#include <limits>
#include <numeric>
#include <ctime>
#include <cmath>

using namespace std;

#define PI 3.14159
#define AREA_CIRCLE(radius) (PI * pow(radius, 2))

int main() {
    cout << "Cirlce Area " << AREA_CIRCLE(5) << endl;
    return 0;
}