#include <iostream>
#include <string>
using namespace std;

string get_prefix(string w, size_t len) {
    string p;
    for (size_t i = 0; i < len; i++) {
        p += w[i];
    }
    return p;
}

void print_word_pyramid(string w) {
    for (size_t i = 1; i <= w.length(); i++) {
        cout << get_prefix(w, i) << endl;
    }
}

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    print_word_pyramid(word);
    return 0;
}
