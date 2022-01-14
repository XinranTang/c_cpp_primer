// File       : main.cpp
// Description: Lecture 2: Hands-On 02, pointers
#include <iostream>
using namespace std;

int main(void)
{
    int a[100] = {0}; // array with 100 elements

    // TODO: create a pointer that points to the first element in the array `a`
    int * p = &a[0];
    // TODO: print the address of the pointer to stdout. (You can use std::cout
    // to print to stdout.)
    cout << &p << endl;
    // TODO: print the address the pointer is pointing to, to stdout.
    cout << p << endl;
    // TODO: create another pointer that points to the last element in the array
    // `a`
    cout << *p << endl;
    // TODO: print the difference between the address the pointer you just
    // created points to and the address the first pointer points to.  What do
    // you observe?
    // -A: The pointer p has address before the address that it points to.
    cout << (long)&p - (long)p << endl;
    return 0;
}
