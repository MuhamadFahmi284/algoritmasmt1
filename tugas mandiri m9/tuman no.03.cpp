#include <iostream>
using namespace std;

void prs(int n, int a[]){

    int i;
    int hasil=1;
    for (i=1;i<=n;i++)
    {
    hasil*=a[i];
    }
    cout<<endl;
    cout<<"Hasil : "<<hasil;
    }
main(){
    int i,n,angka[40];
    cout<<"jumlah angka : ";
    cin>>n;
    for (i=1;i<=n;i++)
    {
    cout<<"Masukan angka ke-"<<i<<" : ";
    cin>>angka[i];
    }
    prs(n,angka);

}
