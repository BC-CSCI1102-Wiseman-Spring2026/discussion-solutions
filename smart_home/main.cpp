#include <iostream>
#include <stdexcept>
#include "smart_device.hpp"
#include "smart_lock.hpp"
#include "smart_thermostat.hpp"
using namespace std;

void status(smart_device *devs[], int num_devs) {
    for (int i = 0; i < num_devs; i++) {
        cout << "(" << i << ") " << *devs[i] << endl;
    }
}

int get_device(int num_devs) {
    int dev;
    cout << "Which device? ";
    cin >> dev;
    if (dev < 0 or dev >= num_devs) {
        throw out_of_range("invalid device!");
    }
    return dev;
}

void toggle(smart_device *devs[], int num_devs) {
    int dev = get_device(num_devs);
    devs[dev]->toggle();
}

void set(smart_device *devs[], int num_devs) {
    int dev = get_device(num_devs);

    int setting;
    cout << "Setting? ";
    cin >> setting;

    devs[dev]->set_setting(setting);
}

int main() {
    int num_devs = 6;
    smart_device *devs[num_devs];
    devs[0] = new smart_device("hallway light");
    devs[1] = new smart_device("vacuum");
    devs[2] = new smart_lock("front door");
    devs[3] = new smart_lock("back door");
    devs[4] = new smart_thermostat("upstairs", 70);
    devs[5] = new smart_thermostat("downstairs", 70);
    
    while (true) {
        string input;
        cout << "Actions: status, toggle, set, quit" << endl;
        cout << "Choice? ";
        cin >> input;

        try {
            if (input == "quit") {
                break;
            } else if (input == "status") {
                status(devs, num_devs);
            } else if (input == "toggle") {
                toggle(devs, num_devs);
            } else if (input == "set") {
                set(devs, num_devs);
            } else {
                cout << "invalid choice!" << endl;
            }
        } catch (exception& e) {
            cout << e.what() << endl;
        }
        cout << endl;
    }
    return 0;
}
