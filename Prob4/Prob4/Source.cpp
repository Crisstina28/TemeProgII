#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char cuv1[100], cuv2[100];
    cin >> cuv1;
    strcpy(cuv2, cuv1);
    strrev(cuv2);
    if (strcmp(cuv1, cuv2) == 0)
        cout << ("DA");
    else
        cout << ("NU");
}