#include <iostream>
#include <string>
#include "ng.hpp"
using namespace std;

int ng::get_int(string name) {
    string tmp;
    cout << "Enter " << name << ": ";
    cin >> tmp;
    int value;
    try {
        value = stoi(tmp);
    } catch (invalid_argument& e) {
        throw invalid_argument(name + " must be an integer");
    }
    return value;
}
