#include<iostream>
using namespace std;
main(){
	string a,b,c,d,e,f;
	
	cout<<"Tanggal [dd-mm-yy]? "<<endl;
	cout<<"\nTanggal :";
	cin>>a;
	cout<<"Bulan :" ;
	cin>>b;
	cout<<"Tahun :";
	cin>>c;
	
	cout<<"\nWaktu [hh : mm : ss]? "<<endl;
	cout<<"\nJam :";
	cin>>d;
	cout<<"Menit :";
	cin>>e;
	cout<<"Detik :";
	cin>>f;
	
	cout<<endl;
	cout<<a <<"-" <<b <<"-" <<c<<endl;
	cout<<d <<":" <<e <<":" <<f<<endl;
	
	return 0;
}
