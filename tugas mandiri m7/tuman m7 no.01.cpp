#include<iostream>
using namespace std;

int main(){

    int x,y,posisi,ketemu=0;
    string cari,data[70];
    cout<<" jumlah peralatan untuk rebahan di hari libur : ";
    cin>>y;

    for(x=0;x<y;x++){
        cout<<"peralatan yang ke - "<<x+1<<" :";
        cin>>data [x];
    }
    cout<<"peralatan yang di cari = ";
    cin>>cari;
    ketemu=0;
    x=0;
    while((ketemu == 0) && (x<y)){
        if(data[x] == cari){
            ketemu = 1;
            posisi = x;
        }
        else x = x+1;
    }
    if(ketemu == 0){
        cout<<"safety gear yang dicari tidak ditemukan"<<endl;
    }
    else{
        cout<<"safety gear yang dicari ditemukan"<<endl;
        cout<<"safety gear pada posisi "<<posisi+1<<endl;
    }
    return 0;
}

