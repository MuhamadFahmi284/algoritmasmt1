#include<iostream>
using namespace std;
void karakter(char a[]){
    int i,jml=0;
    for(i=0;i<a[i];i++)
        jml+=1;
    cout<<"Jumlah karakter : "<<jml<<endl;
}
void salin(char a[]){
    int i,j,n;
    for(i=0;i<a[i];i++)
        n=i+1;
    cout<<"Kalimat dari kiri ke kanan : ";
    for(j=n;j>=0;j--)
        cout<<a[j];
    }
main(){
    char a[100];
    cout<<"menghitung jumlah karakter dalama kalimat dan menyalinnya dari kiri ke kanan \n\n";
    cout<<"Masukan kalimat : ";
    cin.getline(a,sizeof(a));
    karakter(a);
    salin(a);cout<<endl;
}
