#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("in.txt");
ofstream fout("out.txt");

struct elev {
    int nr;
    int pp;
};

int main() {
    int a[100][100];
    int n, k = 0, ppl;
    bool ok;
    fin >> n;
    elev e[100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            fin >> a[i][j];
    }

    fout << "Elevii care se agreaza reciproc: " << endl;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i][j] == a[j][i] && a[i][j] == 1)
                fout << i + 1 << " " << j + 1 << endl;
        }
    }

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


    return 0;
}