#include <iostream>
using namespace std;

int main()
{
	int n, v[1000], suma = 0;
	cin >> n;
	for (int i = 0; i < n; i++) 
	{
		cin >> v[i];
		}

	for (int i = 0; i < n; i++)
	{
		suma = suma + v[i] * v[i];
		
	}
	cout << suma;
}