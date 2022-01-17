#include <iostream>
using namespace std;
class A
{
public:
    virtual void f() const {
        cout << "A" << endl;
    }
};

class B : public A 
{
public:
    virtual void f() const override{
        cout << "B" << endl;
    }
};

class C : public B
{
public:
    virtual void f() const override {
        cout << "C" << endl;
    }
};
int main(void)
{
    // define instances for 3 classes
    A a;
    B b;
    C c;

    // use base pointers to A and B for testing
    A* pa = &a; pa->f();
    pa = &b;    pa->f();
    pa = &c;    pa->f();
    B* pb = &b; pb->f();
    pb = &c;    pb->f();

    return 0;
}
