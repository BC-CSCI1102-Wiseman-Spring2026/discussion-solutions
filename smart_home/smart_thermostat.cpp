#include "smart_device.hpp"
#include "smart_thermostat.hpp"
#include <string>

smart_thermostat::smart_thermostat(string n, int t) : smart_device(n) {
    temp = t;
}

int smart_thermostat::get_setting() {
    return temp;
}

void smart_thermostat::set_setting(int s) {
    temp = s;
}

string smart_thermostat::to_str() {
    string s = name + ": ";
    if (on) {
        s += "temp " + to_string(temp) + " deg";
    } else {
        s += "off";
    }
    return s;
}
