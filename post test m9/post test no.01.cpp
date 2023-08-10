#include<iostream>
using namespace std;

strcpy(char nama[],char nim[],char alamat[]){
    cout<<"\nNama     :"<<nama;
    cout<<"\nNIM      :"<<nim;
    cout<<"\nAlamat   :"<<alamat;
}
int main()
{
    char a[20],b[20],c[20];
    cout<<"Masukan nama : ";
    cin>>a;
    cout<<"Masukan nim  : ";
    cin>>b;
    cout<<"Masukan alamat: ";
    cin>>c;
    cout<<endl;
    strcpy(a,b,c);
    return 0;
}
