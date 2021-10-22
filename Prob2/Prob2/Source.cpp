#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int a, b, c, P, p;
    cin >> a >> b >> c;

    if ((a * b * c != 0) && (a + b > c) && (b + c > a) && (a + c > b)) {
        P = a + b + c;
        cout << "Perimetrul: " << P << endl;
        p = P / 2;
        cout << "Aria: " << sqrt(p * (p - a) * (p - b) * (p - c));
    }
    return 0;
}