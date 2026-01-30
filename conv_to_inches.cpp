#include <iostream>
using namespace std;

int main() {
    int yards, feet, inches;
    cout << "Enter the number of yards: ";
    cin >> yards;

    cout << "Enter the number of feet: ";
    cin >> feet;

    cout << "Enter the number of inches: ";
    cin >> inches;

    int total = yards*36 + feet*12 + inches;

    cout << "That's " << total << " inches." << endl;
    return 0;
}
