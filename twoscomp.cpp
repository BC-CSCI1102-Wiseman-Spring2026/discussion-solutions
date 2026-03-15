#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

string invert(string binary) {
    string inverted = "";
    for (size_t i = 0; i < binary.length(); i++) {
        if (binary.at(i) == '0') {
            inverted += '1';
        } else if (binary.at(i) == '1') {
            inverted += '0';
        } else {
            throw invalid_argument("That's not a valid binary number!");
        }
    }
    return inverted;
}

string addone(string binary) {
    string added = binary;
    for (size_t i = added.length(); i > 0; i--) {
        if (added.at(i-1) == '0') {
            added.at(i-1) = '1';
            break;
        } else if (added.at(i-1) == '1') {
            added.at(i-1) = '0';
        } else {
            throw invalid_argument("That's not a valid binary number!");
        }
    }
    return added;
}

string twoscomp(string binary) {
    return addone(invert(binary));
}

int main() {
    string binary;
    cout << "Enter a binary number with 0b: ";
    cin >> binary;

    if (binary.length() < 3) {
        cout << "That's not a valid binary number!" << endl;
        return 0;
    }
    if (binary.at(0) != '0' or binary.at(1) != 'b') {
        cout << "That's not a valid binary number!" << endl;
        return 0;
    }

    binary = binary.substr(2);

    try {
        string result = twoscomp(binary);
        cout << "0b" << result << endl;
    } catch(invalid_argument& e) {
        cout << e.what() << endl;
    }

    return 0;
}
