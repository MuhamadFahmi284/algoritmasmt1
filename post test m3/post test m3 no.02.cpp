#include<iostream>
using namespace std;
main ()
{
    int a,b;
    float c,d;
    cout << "=====KONVERSI SUHU=====" << endl;
    cout << " Masukan Suhu (Celcius)= "; cin>> a ;
    b = a+273;
    c = a*0.8;
    d = a*1.8+32;
    cout << "Kelvin = " << b  <<endl;
    cout << "Reamur = " << c  <<endl;
    cout << "Fahrenhait = " << d  <<endl;
    return 0;
}

