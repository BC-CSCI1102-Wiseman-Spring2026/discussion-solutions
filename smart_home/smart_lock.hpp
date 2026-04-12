using namespace std;

class smart_lock : public smart_device {
public:
    smart_lock(string n);

    string to_str() override;
};
