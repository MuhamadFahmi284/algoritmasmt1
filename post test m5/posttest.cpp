#include <iostream>
using namespace std;
int main(){
    
    int n, i, j, s;
    cout<<"program membuat segitiga sama sisi terbalik\n";
    cout<<"masukan jumlah baris dollar = ";
    cin>>n;
    for (i = 1; i <=n; i++)

    {
        for (j = 1; j <= i; j++)
        cout<<" ";
        for (s = 0; s >= (i - n); s--)
        cout<<"$ ";
        cout<<"\n";
    }

    return 0;
}