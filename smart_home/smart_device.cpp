#include <stdexcept>
#include "smart_device.hpp"
using namespace std;

smart_device::smart_device(string n) {
    name = n;
    on = false;
}

string smart_device::get_name() {
    return name;
}

bool smart_device::is_on() {
    return on;
}

void smart_device::toggle() {
    on = !on;
}

int smart_device::get_setting() {
    throw domain_error("this device has no setting");
}

void smart_device::set_setting(int s) {
    throw domain_error("this device has no setting");
}

string smart_device::to_str() {
    string s = name + ": ";
    if (on) {
        s += "on";
    } else {
        s += "off";
    }
    return s;
}

ostream& operator<<(ostream& out, smart_device& d) {
    out << d.to_str();
    return out;
}
