#include<iostream>
using namespace std;

int main(){
    int x,y,posisi,ketemu=0;
    string cari, data[20];
    cout<<"Banyaknya data yang ingin di inputkan : ";
    cin>>y;


    for(x=0;x<y;x++){
        cout<<"Masukan data ke- "<<x+1<<" :";
        cin>>data [x];
    }
    cout<<"Data yang dicari = ";
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
        cout<<"Data yang dicari tidak ditemukan"<<endl;
    }
    else{
        cout<<"Data yang dicari ditemukan"<<endl;
        cout<<"Data pada posisi "<<posisi+1<<endl;
    }
    return 0;
}
