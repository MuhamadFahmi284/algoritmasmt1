#include <iostream>
using namespace std;

int main()
{
	int i, n, proses;
	float f, j, fproses;
	cout << "Masukkan dua integer = "; cin >> i >> n;
	cout << "Masukkan dua float = "; cin >> f >> j;
	proses = i== n;
	fproses = f == j;
	if (proses == fproses)
	{
		cout << "integer dan float sama " << endl;
	}else if (i == n)
	{
		cout << "kedua integer bernilai sama dan kedua float berbeda" << endl;
	}else if (f == j)
	{
		cout << "float sama tetapi integer beda" << endl;
	}else{
		cout << "tidak sama semua" << endl;
	}
	return 0;
}
