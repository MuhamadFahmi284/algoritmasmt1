#include<iostream>
using namespace std;
int main()
{
    int air,tarif_pertama, tarif_kedua, tarif_ketiga, tarif_berikutnya;
    tarif_pertama = 5000;
	tarif_kedua = 7500;
	tarif_ketiga = 10000;
	tarif_berikutnya = 15000;
    cout<<"MENGHITUNG BIAYA AIR PDAM\n"<<endl;
    cout<<"Masukan jumlah penggunaan air anda per meter kubik : ";
    cin>>air;

    if(air <= 10)
    	cout<<"Jumlah yang harus anda bayarkan adalah Rp. "<<air * tarif_pertama<<endl;
    else if(air <= 20)
    	cout<<"Jumlah yang harus anda bayarkan adalah Rp. "<<(air - 10 ) * tarif_kedua + 50000<<endl;
    else if(air <= 30)
    	cout<<"Jumlah yang harus anda bayarkan adalah Rp. "<< (air - 20) * tarif_ketiga + 125000<<endl;
    else
    	cout<<"Jumlah yang harus anda bayarkan adalah Rp. "<<(air - 30 ) * tarif_berikutnya + 325000<<endl;


    return 0;
}
