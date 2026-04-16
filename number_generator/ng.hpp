using namespace std;

class ng {
protected:
    int get_int(string name);

public:
    virtual int next() = 0;
    virtual bool has_more() = 0;
};
