#include "smart_device.hpp"
#include "smart_lock.hpp"

smart_lock::smart_lock(string n) : smart_device(n) {
}

string smart_lock::to_str() {
    string s = name + ": ";
    if (on) {
        s += "locked";
    } else {
        s += "unlocked";
    }
    return s;
}
