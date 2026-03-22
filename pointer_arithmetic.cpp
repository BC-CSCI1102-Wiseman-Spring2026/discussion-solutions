#include <iostream>
#include <stdexcept>
using namespace std;

int sum(int *a, int size) {
    if (a == NULL) {
        throw invalid_argument("invalid pointer!");
    }
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(a+i);
    }
    return sum;
}

int cstr_length(char *s) {
    if (s == NULL) {
        throw invalid_argument("invalid pointer!");
    }
    int len = 0;
    char *c = s;
    while (*c != '\0') {
        len++;
        c++;
    }
    return len;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int a_size = 5;
    cout << sum(a, a_size) << endl;
    // prints 15

    int b[] = {1};
    int b_size = 1;
    cout << sum(b, b_size) << endl;
    // prints 1

    int c[] = {};
    int c_size = 0;
    cout << sum(c, c_size) << endl;
    // prints 0

    char s[] = "Hello";
    cout << cstr_length(s) << endl;
    // prints 5

    char t[] = "";
    cout << cstr_length(t) << endl;
    // prints 0

    char u[] = "pointers are fun!";
    cout << cstr_length(u) << endl;
    // prints 17

    return 0;
}

