#include <iostream>
using namespace std;

class Foo
{
    float data_[100];
    public:
    Foo(const int &v) {
        cout << v << endl;
    }
    float &get(int i) { 
        cout << "first" << endl;
        return data_[i]; 
    }
    float get(int i) const { 
        cout << "second" << endl;
        return data_[i]; 
    }
    Foo &operator=(const Foo &c)
    {
        cout << "2" << endl;
        if (&c == this) {
            return *this;
        }
        for (int i = 0; i < 10; ++i) {
            data_[i] = c.data_[i];
        }
        return *this;
    }
};
int main(void)
{
    Foo f(1);
    f.get(0) = 1;
    Foo ff = 1; // what is being called here?
    Foo g(0); // what is being called here?
    ff = g; // what is being called here?
    return 0;
}