#include<iostream>
using namespace std;
main ()
{
    char senin,selasa,rabu,kamis,jumat,sabtu,minggu;
    char a;	
	
    cout<<"pilih daftar kegiatan hari [(senin)/(selasa)/(rabu)/(kamis)/(jumat)/(sabtu)/(minggu)]";
	cin>>a;
    switch(a)
    {
    	
    case 'a' : cout <<"Hari senin = " << senin<<"-bangun tidur-mandi-berangkat ngampus"<<endl; break;
    case 'b' : cout <<"Hari selasa = " << selasa<<"libur full tidur"<<endl; break;
    case 'c' : cout <<"Hari rabu = " << rabu<<"bangun tidur ,mandi ,berangkat ngampus"<<endl; break;
    case 'd' : cout <<"Hari kamis = " << kamis<<"bangun tidur ,mandi ,berangkat ngampus"<<endl; break;
    case 'e' : cout <<"Hari jumat = " << jumat<<"bangun tidur ,mandi ,berangkat ngampus"<<endl; break;
    case 'f' : cout <<"Hari sabtu = " << sabtu<<"bangun tidur ,mandi ,berangkat ngampus"<<endl; break;
    case 'g' : cout <<"Hari minggu = " << minggu<<"libur full tidur"<<endl; break;
    }
    return 0;
}

