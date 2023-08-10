#include<iostream>
using namespace std;
int main(){
    int bujursangkar,i,j;
    cout << "Program Membuat BujurSangkar" << endl;
    cout << "Masukan jumlah karakter = ";
    cin >> bujursangkar;

    cout << endl;

    for(i=1;i<=bujursangkar;i++) {
    for(j=1;j<=bujursangkar;j++) {
    cout << " #";
    }
    cout << endl;
    }

    return 0;
}
