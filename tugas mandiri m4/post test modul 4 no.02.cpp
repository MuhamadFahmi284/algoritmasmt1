#include<iostream>
using namespace std;
main ()
{
    int celcius,kelvin;
    float reamur,fahrenhait;
    char a;
    cout <<"konversi suhu tubuh" << endl;
    cout <<"Masukan Suhu (Celcius): ";
	cin>>celcius ;
    kelvin = celcius+273;
    reamur = celcius*0.8;
    fahrenhait = (celcius*1.8)+32;
    cout<<"Hasil Konversi ke [K/R/F][(kelvin)/(reamur)/(fahrenhait)]= ";
	cin>>a;
    switch(a)
    {
    case 'K' : cout <<"Kelvin = " << kelvin  <<endl; break;
    case 'R' : cout <<"Reamur = " << reamur  <<endl; break;
    case 'F' : cout <<"Fahrenhait = " << fahrenhait  <<endl; break;
    }
    return 0;
}

