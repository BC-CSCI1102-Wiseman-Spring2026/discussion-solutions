using namespace std;

class rng : public ng {
protected:
    int min, max, n, count;

public:
    rng();
    int next() override;
    bool has_more() override;
};
