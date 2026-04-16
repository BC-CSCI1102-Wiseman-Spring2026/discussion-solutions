#include <iostream>
#include <fstream>
using namespace std;

int stirling(int n, int k) {
    if (n == k) {
        return 1;
    }
    if (n == 0 or k == 0) {
        return 0;
    }
    return k*stirling(n-1, k) + stirling(n-1, k-1);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    if (n < 0) {
        cout << "Error! n must be at least 0." << endl;
        return 1;
    }

    string filename;
    cout << "Enter the file name to store the results: ";
    cin >> filename;
    ofstream ofs(filename);
    if (!ofs.is_open()) {
        cout << "Error! " << filename << " failed to open." << endl;
        return 1;
    }

    for (int i = 0; i <= n; i++) {
        for (int k = 0; k <= i; k++) {
            ofs << stirling(i, k);
            if (i != k) {
                ofs << ",";
            }
        }
        ofs << endl;
    }
    return 0;
}
