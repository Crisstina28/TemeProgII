#include <iostream>

using namespace std;

void citire(int v[], int &n, int &x)
{
    cin >> n;
    for (int k = 0; k < n; k++) {
        cin >> v[k];
    }
    cin >> x;

}

int nrap2(int a[], int n, int x, int i, int& ap) {
    if (n == i) {
        if (a[i] == x)
            return ap + 1;
        else
            return ap;
    }
    else {
        if (a[i] == x) {
            ap += 1;
            return nrap2(a, n, x, i + 1, ap);
        }
        else
            return nrap2(a, n, x, i + 1, ap);
    }
}

int main() {
    int v[100], n, x, apar = 0, i = 0;

    citire(v, n, x);
    cout << nrap2(v, n, x, i, apar);

    return 0;
}
