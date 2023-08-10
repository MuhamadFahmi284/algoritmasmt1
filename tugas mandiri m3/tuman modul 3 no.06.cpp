#include <iostream>
using namespace std;
int main()
{
	int s;
	float p,l,L,K,d,r,miring;
	
	cout<<"Menghitung luas dan keliling persegi"<<endl;
	cout<<"sisi :";cin>>s;
	L=s*s;
	K=4*s;
	cout<<"luas persegi : ";
	cout<<L<<endl;
	cout<<"keliling persegi : ";
	cout<<K<<endl<<endl;
	
	cout<<"Menghitung luas dan keliling persegi panjang"<<endl;
	cout<<"masukan nilai panjang : ";cin>>p;
	cout<<"masukan nilai lebar :  ";cin>>l;
	L=p*l;
	K=(2*p)+(2*l);
	cout<<"luas persegi panjang :"<<L<<endl;
	cout<<"keliling persegi panjang :"<<K<<endl<<endl;
	
	cout<<"Menghitung luas dan keliling lingkaran"<<endl;
	cout<<"masukan diameter : ";cin>>d;
	r=0.5*d;
	L=3.14*r*r;
	K=3.14*d;
	cout<<"luas lingkaran : "<<L<<endl;
	cout<<"keliling lingkaran :"<<K;
	
    return 0;
}

