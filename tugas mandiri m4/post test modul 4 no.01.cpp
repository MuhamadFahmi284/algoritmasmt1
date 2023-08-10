#include<iostream>
using namespace std;
main()
{
    int suhu;
    cout<<"Mengetahui kesehatan tubuh seseorang melalui suhu tubuh"<<endl;
    cout<<"Masukan Suhu Tubuh  : ";
	cin>>suhu;
	if (suhu<=33)
		cout<<"Masih dinyatakan hidup"<<endl;
	else if (suhu==34)
	    cout<<"Terlalu Dingin"<<endl;
	else if (suhu==35)
	    cout<<"Dingin"<<endl;
	else if (suhu==36)
	    cout<<"Masih OK!!"<<endl;
	else if(suhu==37)
	    cout<<"Keadaan FIT"<<endl;
	else if (suhu==38)
	    cout<<"Demam Ringan"<<endl;
	else if (suhu==39)
	    cout<<"Hampir Step"<<endl;
	if (suhu>39)
	    cout<<"Segera Panggil Ambulan!!!"<<endl;
    return 0;

}

