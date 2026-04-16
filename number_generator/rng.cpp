#include <string>
#include <stdexcept>
#include <cstdlib>
#include <ctime>
#include "ng.hpp"
#include "rng.hpp"
using namespace std;

rng::rng() {
    min = get_int("minimum");
    max = get_int("maximum");
    if (min > max) {
        throw invalid_argument("min must be <= max");
    }
    n = get_int("N");
    if (n < 1) {
        throw invalid_argument("n must be at least 1");
    }

    count = 0;

    srand(time(NULL));
}

int rng::next() {
    if (count >= n) {
        throw length_error("no more values");
    }

    count++;
    int span = max - min + 1;
    return (rand() % span) + min;
}

bool rng::has_more() {
    if (count >= n) {
        return false;
    }
    return true;
}
