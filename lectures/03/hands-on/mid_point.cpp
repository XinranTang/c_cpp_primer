#include <functional>
#include <cmath>
#include <iostream>

using namespace std;

double mid_point(function<double(double)> f, const double a, const double b, const int n) {
    const double dx = (b-a) / n;
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += f((i+0.5) * dx);
    }
    return dx * sum;
}

int main(void) {
    auto f = [](double x) {return sin(x) * cos(x);};
    double result = mid_point(f, 0, 4 * M_PI, 100);
    cout << result << endl;
    return 0;
}