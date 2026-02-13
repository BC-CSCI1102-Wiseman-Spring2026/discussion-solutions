#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter n (positive): ";
    cin >> n;

    if (n <= 0) {
        cout << "n must be positive!" << endl;
        return 0;
    }

    int max=0, min=0;

    cout << "Now enter " << n << " positive integers:" << endl;
    for (int i = 1; i <= n; i++) {
        int val;
        cin >> val;
        if (val <= 0) {
            cout << "Skipping non-positive value" << endl;
            continue;
        }

        int count;
        for (count = 0; val != 0; count++) {
            val = val / 10;
        }

        if (count > max) {
            max = count;
        }
        if (min == 0 || count < min) {
            min = count;
        }
    }

    if (max == 0) {
        cout << "No valid numbers entered!" << endl;
    } else {
        string plural = "s";
        if (max == 1) {
            plural = "";
        }
        cout << "The longest number had " << max << " digit" << plural << "." << endl;

        plural = "s";
        if (min == 1) {
            plural = "";
        }
        cout << "The shortest number had " << min << " digit" << plural << "." << endl;
    }
    return 0;
}
