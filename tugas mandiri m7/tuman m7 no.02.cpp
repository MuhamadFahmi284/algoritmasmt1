#include<iostream>
using namespace std;

int main(){
    int x,y,posisi,ketemu=0;
    string cari, data[50];
    cout << " Program Pencarian daftar judul Film Box Office 2019 " << endl;
    cout<<"Masukan Banyaknya Daftar Judul Film = ";
    cin>>y;
    cout<<endl;


    for(x=0;x<y;x++){
        cout<<"Masukan Judul Film ke-"<<x+1 <<": ";
        cin>>data[x];
    }
    cout<<endl;
    cout<<"Film Box Office yang di Cari = ";
    cin>>cari;
    ketemu = 0;
    x=0;
    while((ketemu == 0) && (x < y)){
        if(data[x] == cari){
            ketemu = 1;
            posisi = x;
        }
        else x = x + 1;
    }
    if(ketemu == 0){
        cout<<"Film yang dicari tidak ditemukan"<<endl;
    }else{
    cout<<"Film yang dicari ditemukan"<<endl;
    cout<<"Film pada posisi "<<posisi +1<<endl;
    }
    return 0;
}
