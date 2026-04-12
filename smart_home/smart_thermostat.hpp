using namespace std;

class smart_thermostat : public smart_device {
protected:
    int temp;

public:
    smart_thermostat(string n, int t);

    int get_setting() override;
    void set_setting(int s) override;

    string to_str() override;
};
