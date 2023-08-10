#include<iostream>
using namespace std;
int main(){
	int n, i, j, s;
	cout<<"membuat program segitiga siku-siku dengan rata kanan\n ";
	cout<<"masukan jumlah baris a keong = ";
	cin>>n;

	for(i = 1; i<=n; i++)

    {
    for(j = n; j >=i; j--)
    cout<<" ";
    for(s = 1; s <=i; s++)
    cout<<"@";
    cout<<endl;
	}

	return 0;
}
