#include<iostream>
using namespace std;
main ()
{
    int a,b,x,hasil;
    b=1024;
    x=7;
    cout << "Biaya akses data yang telah digunakan" <<endl;
    cout << "Masukan Jmlh Pemakaian Mega Byte/mb  :  ";
	cin>>a;
    hasil=(a*b)*x;
    cout << "maka biaya yang harus anda bayar senilai = Rp " <<hasil<<endl;

    return 0;

}

