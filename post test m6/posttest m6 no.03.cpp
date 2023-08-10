#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int i,x;
	int matriks_A[2][3], matriks_B[3][3], matriks_C[2][3];

	cout<< "\nPerkalian 2 Matriks Ordo 2x3 X 2x3 \n\n";
	do{
	//Input data matriks A
	cout<< "\n PENGISIAN MATRIK A \n";
	cout<< "\nData matriks A \n";
	for(i=0 ;i<2; i++)
	{
	for(x=0 ;x<3; x++)
	{
	cout<< "["<<x<<"]["<<i<<"] : ";
	cin>> matriks_A[i][x];
	}
	}
	cout<< "\n PENGISIAN MATRIK B \n";
	//Input data matriks B
	cout<< "\nData matriks B \n";
	for(i=0 ;i<3; i++)
	{
	for(x=0 ;x<3; x++)
	{
	cout<<"["<<i<<"]["<<x<<"] : ";
	cin>> matriks_B[i][x];
	}
	}
	cout<< "  HASIL PERKALIAN A x B  ";
	//Output hasil penjumlahan Matriks A + Matriks B
	cout<< "\nMatriks A X Matriks B : "<<endl;
	for(i=0 ;i<2; i++)
	{
	for(x=0; x<3; x++)
	{
	matriks_C[i][x]=matriks_A[i][0]*matriks_B[0][x]+matriks_A[i][1]*matriks_B[1][x]+matriks_A[i][2]*matriks_B[2][x];
	cout<<"\t"<<matriks_C[i][x];
	}
	cout<<endl;
	}
	getch();
    }
}

