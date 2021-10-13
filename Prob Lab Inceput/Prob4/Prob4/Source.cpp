#include <iostream>
using namespace std;
int main()
{
    int n[10];
    bool ver = true;
    for (int i = 0; i < 10; i++)
    {
        cin >> n[i];
        for (int j = 0; j < i; j++)
        {
            if (n[i] == n[j])
            {
                ver=false;
            }
        }
    }
    if (ver)
    {
        cout << "sunt distincte";
    }
    else
    {
        cout << "nu sunt distincte";
    }
    return 0;

}