#include <iostream>
using namespace std;

class book {
private:
    string title;
    int page_count;
    int current_page;

public:
    book(string t, int pc) {
        title = t;
        page_count = pc;
        current_page = 0;
    }

    void read(int num_pages) {
        current_page += num_pages;
        if (current_page > page_count) {
            current_page = page_count;
        }
    }

    string to_str() {
        string s = title + ": ";
        if (current_page == 0) {
            s += "not started";
        } else if (current_page == page_count) {
            s += "finished";
        } else {
            s += "on page " + to_string(current_page);
        }
        return s;
    }
};

int main() {
    book phm("Project Hail Mary", 496);
    cout << phm.to_str() << endl;
    phm.read(100);
    cout << phm.to_str() << endl;
    phm.read(400);
    cout << phm.to_str() << endl;
    return 0;
}
