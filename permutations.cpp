#include <iostream>
#include <string>
using namespace std;

void permutations(string fixed, string remaining) {
    if (remaining.length() == 0) {
        cout << fixed << endl;
        return;
    }

    for (size_t i = 0; i < remaining.length(); i++) {
        char c = remaining[i];
        string rem = remaining.substr(0, i) + remaining.substr(i+1);
        permutations(fixed + c, rem);
    }
}

void print_permutations(string s) {
   permutations("", s); 
}

int main() {
    string s;
    cout << "Enter a word: ";
    cin >> s;

    print_permutations(s);
    return 0;
}
