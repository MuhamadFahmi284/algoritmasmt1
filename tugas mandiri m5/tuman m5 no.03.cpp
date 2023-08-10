#include<iostream>
using namespace std;
int main(){

    int nilai;
    float data,jumlah,rata;

    cout<<"program menghitung jumlah dan rata-rata nilai \n";
    cout<<"masukan nilai ";
    cin>>data;

    for(int i = 1; i<=data; i++)
    {
        cout<<"Data nilai ke-"<<i<<" : ";
        cin>>nilai;
        jumlah += nilai;
    }

    cout<<"\n jumlah semua nilai : "<<jumlah;

    rata= jumlah/data;
    cout<<"\n nilai rata-ratanya : "<<rata;

    return 0;
}
