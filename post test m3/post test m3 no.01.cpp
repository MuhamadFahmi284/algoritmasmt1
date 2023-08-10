#include <iostream>
using namespace std;
int main(){
    float feet,a , meter=0.3048;
    cout << "Masukkan feet: "; cin>>a;
    cout << "\nKonversi panjang ke meter" << endl;
    feet = a*0.3048;
    cout<<" meter = "<<a * meter<<endl;
    return 0;
}
