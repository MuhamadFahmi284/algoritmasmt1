#include<iostream>
using namespace std;

int main(){
    int x,y,posisi,ketemu=0;
    string data[70] ,cari;
    cout<<"berapa banyak pencarian karakter yang ingin di masukan? : ";
    cin>>y;


    for(x=0;x<y;x++){
        cout<<"Karakter ke- "<<x+1<<" :";
        cin>>data [x];
    }
    cout<<"Karakter yang dicari : ";
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
        cout<<"karakter yang dicari tidak ditemukan"<<endl;
    }
    else{
        cout<<"karakter yang dicari ditemukan"<<endl;
        cout<<"karakter pada posisi "<<posisi+1<<endl;
    }
    return 0;
}
