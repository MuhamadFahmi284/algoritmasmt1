#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int G,H,D,S,J,K,L,W,X,Y,Z;

    cout<<"Masukkan Niai ke-1 =";
    cin>>G;
    cout<<"Masukkan Nilai ke-2 =";
    cin>>H;
    cout<<"Masukkan Nilai ke-3 =";
    cin>>D;

    S=++G*H<D >100;
    J=--G+D*H <100;
    K=++S+--J*G >200;
    L=S+J+K >150;
    W= S && J && K && L;
    Y= !(S+J+K+L);
    X= S||J||K||L;
    Z= S^J^K^L;

    getch();
    cout<<"Program Operasi Logika AND,OR,NOT,XOR \n"<<endl;
    getch();
    cout<<"(Nilai ke-1 X Nilai ke-2 < Nilai ke-3 > 100adalah = "<<S<<endl;
    getch();
    cout<<"(Nilai ke-1 + Nilai ke-3 X Nilai ke-2 <100 adalah ="<<J<<endl;
    getch();
    cout<<"(Nilai ke-4 + Nilai ke-5 X Nilai ke-1 >200 adalah = "<<K<<endl;
    getch();
    cout<<"(Nilai ke-1 + Nilai ke-5 + Nilai ke-6 >150 adalah ="<<L<<endl;
    getch();
    cout<<" \nMaka Logika AND = "<<W<<endl;
    cout<<" \nMaka Logika NOT = "<<Y<<endl;
    cout<<" \nMaka Logika OR = "<<X<<endl;
    cout<<" \nMaka Logika XOR = "<<Z<<endl;
return 0;
}

