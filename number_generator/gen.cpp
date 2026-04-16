#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>
#include "ng.hpp"
#include "rng.hpp"
#include "seq.hpp"
using namespace std;

int main() {
    string type;
    cout << "Enter rng or seq: ";
    cin >> type;
    if (type != "rng" and type != "seq") {
        cout << "Error! Must select rnq or seq." << endl;
        return 1;
    }

    ng *gen;

    try {
        if (type == "rng") {
            gen = new rng();
        } else {
            gen = new seq();
        }

        while (gen->has_more()) {
            cout << gen->next() << endl;
        }
    } catch (exception& e) {
        cout << "Error! " << e.what() << "." << endl;
        return 1;
    }

    return 0;
}
