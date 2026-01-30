#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    float x, y, z;
    cout << "L2 Calculator for <x,y,z>" << endl;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter z: ";
    cin >> z;

    float norm = x*x + y*y + z*z;
    norm = sqrt(norm);

    cout << "L2=" << fixed << setprecision(3) << norm << endl;

    return 0;
}
