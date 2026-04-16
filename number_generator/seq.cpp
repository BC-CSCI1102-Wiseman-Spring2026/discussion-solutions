#include <iostream>
#include <string>
#include <stdexcept>
#include "ng.hpp"
#include "seq.hpp"
using namespace std;

seq::seq() {
    start = get_int("start");
    stop = get_int("stop");
    step = get_int("step");
    if (step == 0) {
        throw invalid_argument("step can't be zero");
    } else if (step > 0 and stop < start) {
        throw invalid_argument("stop must be >= start with positive step");
    } else if (step < 0 and stop > start) {
        throw invalid_argument("stop must be <= start with negative step");
    }

    next_value = start - step;
}

int seq::next() {
    if (step > 0 and next_value + step > stop) {
        throw length_error("no more values");
    } else if (step < 0 and next_value + step < stop) {
        throw length_error("no more values");
    }

    next_value += step;
    return next_value;
}

bool seq::has_more() {
    if (step > 0 and next_value + step > stop) {
        return false;
    } else if (step < 0 and next_value + step < stop) {
        return false;
    }
    return true;
}
