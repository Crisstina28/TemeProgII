#include <iostream>

using namespace std;
int main() 
{

	int v;
	cout << "Variablia este ";
	cin >> v;

	while (v != 0)
	{
		for (int i = 1; i <= v; i++)

		{
			cout << i << " ";
		}

		cout << endl;
		v--;
	}

	
}
