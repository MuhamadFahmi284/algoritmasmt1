#include <iostream>

using namespace std;

int main()
{
  cout << "Program Membuat BujurSangkar" << endl;

  int bujursangkar,i,j;

  cout << "Masukan jumlah karakter = ";
  cin >> bujursangkar;

  cout << endl;

  for(i=1;i<=bujursangkar;i++) {
    for(j=1;j<=bujursangkar;j++) {
      cout << " @";
    }
    cout << endl;
  }

  return 0;
}
