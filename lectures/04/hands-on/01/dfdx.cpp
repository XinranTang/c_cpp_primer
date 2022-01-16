// File       : dfdx.cpp
// Description: Program to compute the first derivative of a function f
#include <cassert>
#include <cstdlib>
#include <cmath>
#include <functional>
#include <fstream>
// TODO: include more headers here if you need them
using namespace std;

int main(int argc, char *argv[])
{
    assert(2 == argc);
    const int n = atoi(argv[1]);

    // interval boundaries
    const double a = -10.0;
    const double b = 0.0;

    // TODO:
    // define the function f.  You may use a C++ lambda or a regular C/C++
    // function.  The signature should look like this: double f(double x);
    auto f = [](double x) {
        return exp(-0.5 * x) * sin(x) * pow(cos(x), 2);
    };
    // TODO:
    // allocate two arrays on the heap for the values x_i and f(x_i).
    // Initialize the arrays by computing the corresponding values.
    //
    // Note: we could also solve this task without allocating memory.  For the
    // sake of this exercise, we chose to allocate arrays and pre-compute the
    // values.
    double * x = (double *)malloc(sizeof(double) * (n+2));
    double * fx = (double *)malloc(sizeof(double) * (n+2));
    // TODO:
    // compute the derivative and write the result into a file with the required
    // format
    double interval = (b - a) / n;
    x[0] = a;
    x[n+1] = b;
    fx[0] = f(a);
    fx[n+1] = f(b);

    for (int i = 1; i <= n; i++) {
        x[i] = a + interval * i;
        fx[i] = f(x[i]);
    }

    ofstream out_file("output.txt");
    out_file.precision(6);
    out_file << scientific;

    for (int i = 1; i <= n; i++) {
        out_file << x[i] << "\t";
        out_file << fx[i] << "\t";
        out_file << (fx[i+1] - fx[i-1]) / (2 * interval) << endl;
    }
    // TODO:
    // free the allocated memory
    free(x);
    free(fx);
    return 0;
}
