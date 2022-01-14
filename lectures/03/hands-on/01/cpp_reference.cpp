// File       : cpp_reference.cpp
// Description: C++ references

#include <array>
#include <iostream>
using namespace std;

void print(std::array<int, 4> v, const char msg[])
{
    std::cout << msg << '\n';
    for (size_t i = 0; i < v.size(); ++i) {
        std::cout << v[i] << '\n';
    }
    std::cout << '\n';
}

// 2. set values
void set_values_1(std::array<int, 4> v)
{
    // TODO: implement the function here
    for (int i = 0; i < 4; i++) {
        v[i] = i+1;
    }
}

// TODO: write another function set_values_2 that behaves the same as
// set_values_1 and takes a reference to an std::array instead
void set_values_2(std::array<int, 4> & v) 
{
    for (int i = 0; i < 4; i++) {
        v[i] = 4-i;
    }
}
int main(void)
{
    // 1.
    // TODO: define a std::array here
    array<int, 4> a = {0};
    print(a, "After initialization");

    set_values_1(a);
    print(a, "After set_values_1");

    set_values_2(a);
    print(a, "After set_values_2");

    std::cout << "What do you observe?\n";
    std::cout << "The first function doesn't change values inside the array, while the other way around for the second function" << endl;
    return 0;
}
