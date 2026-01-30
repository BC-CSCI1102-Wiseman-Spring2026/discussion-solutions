#include <iostream>
using namespace std;

int main() {
    int total;
    cout << "Enter the total number of inches: ";
    cin >> total;

    int yards = total / 36;
    int feet = (total % 36) / 12;
    int inches = total % 12;

    cout << "That's " << yards << " yards, ";
    cout << feet << " feet, and ";
    cout << inches << " inches." << endl;
    return 0;
}
