#include <iostream>
using namespace std;

class smart_device {
protected:
    string name;
    bool on;

public:
    smart_device(string n);

    string get_name();

    bool is_on();
    void toggle();

    virtual int get_setting();
    virtual void set_setting(int s);

    virtual string to_str();
};

ostream& operator<<(ostream& out, smart_device& d);
