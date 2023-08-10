#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	a=4;
	b=3;
	cout << "masukkan deret 3n+1" << endl;
	cout<<"Suku ke-n : ";
	cin>>c;


	int i;
	long int u,j=0;
	cout << "\nBaris Aritmatika = ";
	for (i = 1; i <=c; ++i)
	{
		u=a+(i-1)*b;
		j+=u;
		cout << " " << u;
	}
	cout << "\njumlah deret Aritmatika = " << j;
	return 0;
}
