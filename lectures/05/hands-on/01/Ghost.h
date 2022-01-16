#include <iostream>
using namespace std;

class Ghost
{
    const char * name_;
public:
    Ghost(const char *name = "Ghost"): name_(name) 
    {
        cout << "Construct A" << endl;
    }
    virtual ~Ghost() {
        cout << "Destruct A" << endl;
    }

    Ghost(const Ghost & c): name_(c.name_) 
    {
        cout << "Copy A" <<endl;
    }

    void spook() const {
        cout << name_ << " BOO!" << endl;
    }

};

class Rider : public Ghost // Rider inherits from Ghost
{
public:
    Rider() : Ghost("Rider") {
        cout << "Construct B" << endl;
    }
    ~Rider() {
        cout << "Destruct B" << endl;
    }
};
