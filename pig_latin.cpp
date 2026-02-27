#include <iostream>
#include <string>
using namespace std;

bool is_vowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

string to_pig_latin(string s) {
    if (s.length() == 0) {
        return "";
    }

    string pig;
    if (is_vowel(s[0])) {
        pig = s + "way"; 
    } else {
        size_t i;
        for (i = 0; i < s.length(); i++) {
            if (is_vowel(s.at(i))) {
                break;
            }
        }
        pig = s.substr(i) + s.substr(0,i) + "ay";
    }

    if (s[0] >= 'A' && s[0] <= 'Z') {
        pig[0] = toupper(pig[0]);
    }
    for (size_t i = 1; i < pig.length(); i++) {
        pig[i] = tolower(pig[i]);
    }

    return pig;
}

int main() {
    string word;
    cout << "Enter one word at a time, quit to stop:" << endl;
    while (true) {
        cin >> word;
        if (word == "quit") {
            break;
        }
        string pig = to_pig_latin(word);
        cout << pig << endl;
    }
    return 0;
}
