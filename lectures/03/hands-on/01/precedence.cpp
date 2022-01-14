// File       : precedence.cpp
// Description: Pointers and operator precedence
#include <iostream>

int main(void)
{
    // int a[10];
    // const int *p = &a[0];
    // *(p + 0); // a[0]
    // *(p + 1); // a[1]
    // *(p + 2); // a[2]
    // ...       // and so on
    // TODO: try to understand this code
    const char *ptr = "Hello World!";
    for (; *ptr;) {
        std::cout << *ptr++ << '\n';
    }
    return 0;
}
