# include <iostream>
using namespace std;

int main() 
{
	int n, cn, ver;
	cin >> n;
	cn = n;
	ver = cn % 10;//ultima cifra a lui cn
	cn = cn / 10;//impartim la 10 ca sa isi piarda unitatea
	while (cn != 0)
	{
		ver = ver * 10;
		ver = ver + cn % 10;
		cn = cn / 10;

	}
	if (n == ver) 
	{
		cout << "Este polindrom";

	}
	else {
		cout << "Nu este polindrom";
	}

}