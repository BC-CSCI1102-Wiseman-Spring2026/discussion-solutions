#include <iostream>
#include <string>
using namespace std;

class pig_latin {
private:
    string orig;
    string pig;

    bool is_vowel(char c) {
        c = tolower(c);
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }

public:
    pig_latin(string s) {
        orig = s;
        if (orig.length() == 0) {
            pig = "";
            return;
        }

        if (is_vowel(orig[0])) {
            pig = orig + "way"; 
        } else {
            size_t i;
            for (i = 0; i < orig.length(); i++) {
                if (is_vowel(orig.at(i))) {
                    break;
                }
            }
            pig = orig.substr(i) + orig.substr(0,i) + "ay";
        }

        if (orig[0] >= 'A' && orig[0] <= 'Z') {
            pig[0] = toupper(pig[0]);
        }
        for (size_t i = 1; i < pig.length(); i++) {
            pig[i] = tolower(pig[i]);
        }
    }

    string to_str() {
        return pig;
    }
};

int main() {
    string word;
    cout << "Enter one word at a time, quit to stop:" << endl;
    while (true) {
        cin >> word;
        if (word == "quit") {
            break;
        }
        pig_latin p(word);
        cout << p.to_str() << endl;
    }
    return 0;
}
