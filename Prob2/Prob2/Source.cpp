#include <iostream>
#include <cmath>

using namespace std;
void citire(int &x)
{
    cin >> x;
  
}

void  prelucrare(int a, int b, int c)
{
    int perimetru, arie;
    if ((a * b * c != 0) && (a + b > c) && (b + c > a) && (a + c > b)) {
        perimetru = a + b + c;
        cout << "Perimetrul: " << perimetru << endl;
        arie = perimetru / 2;
        cout << "Aria: " << sqrt(arie * (arie - a) * (arie - b) * (arie - c));
    }
}

int main() {

    int a, b,c;
    citire(a);
    citire(b);
    citire(c);

    prelucrare(a, b, c);
    return 0;
}
