#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char c[200], p[200];
    int k = 0, lit = 0;
    cin.getline(c, 200);
    cin.getline(p, 200);

    for (int i = 0; i < strlen(p) - 1; i++) {
        if (c[k] == p[i]) {
            lit++;
            k++;
        }
    }

    if (strlen(c) == lit)
        cout << "Contine";
    else
        cout << "Nu contine";

    return 0;
}