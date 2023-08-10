#include <iostream>
#include <windows.h>
using namespace std;

main(){
	char word[25]={'s','i','s','t','e','m','i','n','f','o','r','m','a','s','i'};
	char kata[25];
	char kunci[20]={'k','i','t','a',' ','j','u','r','u','s','a','n'};
	int x,y,hitung=0,salah=0,c,benar;
	char tebak;

	hitung=0;
	salah=0;
	system("cls");
	cout<<"\n\n\t\t\t\t<<<< GAME TEBAK KATA >>>>\n\n";
	cout<<"\nPERATURAN :\n";
	cout<<"Kesalahan hanya diberikan 3 kali kalau melebihi dinyatakan kalah\n";
	cout<<"\nKata Kunci      :";
	for(x=0;x<12;x++)
	{
	cout<<kunci[x];
	}
	cout<<"\n";

	cout<<"\nTampilan Awal   :";
	for(y=0;y<15;y++)
	{
	kata[y]='*';
	cout<<kata[y];
	fflush(stdin);
	}

	for(y=0;y<15;y++)
	{
	cout<<"\n\nTebak huruf ke "<<y+1<<" : ";
	cin>>tebak;
	fflush(stdin);
	hitung=0;
	for(c=0;c<15;c++)
	{
	if(tebak==word[c])
	{
	kata[c]=tebak;
	hitung++;
	}
	}

	cout<<"tampilan : ";
	if(hitung<1)
	{
	salah++;
	for(x=0;x<15;x++)
	{
	cout<<kata[x];
	}
	cout<<"\n\n>>> kamu Salah! <<<\njumlah kesalahan = "<<salah;
	}
	else
	{
	for(x=0;x<15;x++)
	{
	cout<<kata[x];  }
	cout<<"\n\n>>> bagus anda bener! <<<\njumlah kesalahan = "<<salah;
	}

	{ if(salah>2)
	{
	cout<<"\n\n\n\n<< MAAF KESEMPATAN ANDA SUDAH HABIS >>";
	cout<<"\n\n\n====================kalah yaa kasihan.....!!!====================";
	break;
	}
	benar=1;
	for(c=0;c<15;c++)
	{
	if(kata[c]!=word[c])

	benar=0;
	}
	}
	if(benar>0)
	{
	cout<<"\n\n\n\n<< SELAMAT ANDA MENDAPATKAN 10 JUTA >>";
	cout<<"\n\n\n-------------------Congrulation-----------------";
	break;
	}
	cout<<"\n\n";
	}
}
