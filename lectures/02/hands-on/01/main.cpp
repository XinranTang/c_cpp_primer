// File       : main.cpp
// Description: Lecture 2: Hands-On 01
#include <iostream>
#include <array>
#define N 100
using namespace std;
// you can write to stdout with: std::cout << "Hello\n"; // (example)

void init(std::array<int, N> v1) {
    for (int i = 0; i < N; i++) {
        v1[i] = i + 1;
    }
}

void cp(std::array<int, N> v1, std::array<int, N> v2) {
    for (int i = 0; i < N; i++) {
        v2[i] = v1[i];
        cout << v1[i] - v2[i] <<endl;
    }
}

int main(void)
{

    std::array<int, N> v1;
    init(v1);
    std::array<int, N> v2;
    cp(v1, v2);
    return 0;
}
