#include <iostream>
using namespace std;

int main()
{
	int n, p = 1, i = 1;
	cin >> n;
	while (i <= n) 
	{
		p *= i;
		i++;
	}
	cout<<p;
}