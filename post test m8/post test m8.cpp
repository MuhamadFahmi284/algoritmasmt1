#include<iostream>
using namespace std;
main()
{
    int A,B,C,D,E,Nilai;
    cout<<"Menentukan Grade suatu nilai"<<endl;
    cout<<"Masukan Nilai : ";
    cin>>Nilai;
   if (Nilai <45)
        cout<<" Nilai kamu = E";

    else if (Nilai < 56)
    cout<<" Nilai kamu  = D";

    else if (Nilai < 68)
    cout<<" Nilai kamu  = C";

    else if (Nilai < 80)
    cout<<" Nilai kamu  = B";

    else if (Nilai >80)
    cout<<" Nilai kamu  = A";

return 0;
}
