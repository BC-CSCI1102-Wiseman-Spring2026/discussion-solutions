#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int k;
    cout << "Enter k: ";
    cin >> k;
    if (k < 0) {
        cout << "k must be at least zero!" << endl;
        return 0;
    }

    cout << fixed << setprecision(10);

    float pi = 0;
    for (int i = 0; i <= k; i++) {
       pi += pow(-1, i) / (2 * i + 1);
       cout << i << ": ~" << 4*pi << endl;
    }

    return 0;
}
