#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("in.txt");
ofstream fout("ou.txt");

struct elev {
    int nr;
    int pp;
};

void citire(int a[100][100], int n)
{
    fin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            fin >> a[i][j];
    }

}

void eleviiCareSeAgreazaRecipropc(int a[100][100], int n)
{
    fout << "Elevii care se agreaza reciproc: " << endl;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i][j] == a[j][i] && a[i][j] == 1)
                fout << i + 1 << " " << j + 1 << endl;
        }
    }
}

void eleviCareNuSuntAgreatiDeNimeni(int a[100][100], int n)
{
    bool ok;
    fout << "Elevii care nu sunt agreati de nimeni: " << endl;

    for (int i = 0; i < n; i++) {
        ok = 0;
        for (int j = 0; j < n; j++) {
            if (a[j][i] == 1 && j != i)
                ok = 1;
        }
        if (ok == 0)
            fout << i + 1 << endl;
    }

}

void eleviCareNuAgreazaPeNimeni(int a[100][100], int n)
{
    bool ok;
    fout << "Elevii care nu agreaza pe nimeni: " << endl;

    for (int i = 0; i < n; i++) {
        ok = 0;
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 1 && j != i)
                ok = 1;
        }
        if (ok == 0)
            fout << i + 1 << endl;
    }
}

void eleviInOrdineaPopularitaii(int a[100][100], int n)
{
    int  k = 0, ppl;
    elev e[100];
    fout << "Elevii in ordinea popularitatii: " << endl;

    for (int i = 0; i < n; i++) {
        k = 0;
        for (int j = 0; j < n; j++) {
            if (a[j][i] == 1 && j != i)
                k++;
        }
        e[i].nr = i;
        e[i].pp = k;
    }

    ppl = n + 1;

    do {
        ppl--;
        for (int i = 0; i < n; i++) {
            if (e[i].pp == ppl)
                fout << e[i].nr + 1 << endl;
        }
    } while (ppl != 0);
}

int main() {
    int a[100][100], n;
    citire(a, n);
    eleviiCareSeAgreazaRecipropc(a, n);
    eleviCareNuSuntAgreatiDeNimeni(a, n);
    eleviCareNuAgreazaPeNimeni(a, n);
    eleviInOrdineaPopularitaii(a, n);
    return 0;
}

   
