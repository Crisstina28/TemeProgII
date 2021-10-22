#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("in.txt");
ofstream fout("out.txt");

int main() {
    double a[1000], n, s = 0;
    fin >> n;
    for (int i = 0; i < n; i++) {
        fin >> a[i];
        s += a[i];
    }
    fout << s / n;
}