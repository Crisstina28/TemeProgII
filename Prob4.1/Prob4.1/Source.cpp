#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("in.txt");
ofstream fout("ou.txt");

void citire(int a[], int &n)
{
fin >> n;
    for (int i = 0; i < n; i++) {
        fin >> a[i];
    }
}

int parcurgere(int a[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++) {
         s += a[i];
    }
    return s;
}

int main() {
    int  a[1000], n;
    citire(a, n);
    fout << parcurgere(a,n) / n;
}
