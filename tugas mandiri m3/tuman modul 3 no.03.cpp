#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float a,mm,m;
	string hasil;
	
	cout<<"konversi satuan jarak kedalam meter dan milimeter "<<endl;
	cout<<"masukan feet : ";
	cin>>a;
	mm=a*384.9;
	m=a*(384.9/1000);
	cout<<"1.hasil konversi feet ke milimeter :"<<a*384.9<<hasil<<endl;
	cout<<"2.hasil konversi milimeter ke meter:"<<a*(384.9/1000)<<hasil<<endl;
	getch ();
	return 0;
}

