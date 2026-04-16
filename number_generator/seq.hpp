using namespace std;

class seq : public ng {
protected:
    int start, stop, step, next_value;

public:
    seq();
    int next() override;
    bool has_more() override;
};
