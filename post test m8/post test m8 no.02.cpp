#include <iostream>
using namespace std;

int main(){
  cout << "  Program C++ Penjumlahan Deret  " << endl;
  cout << endl;

  int x, y, total;
  total = 1;

  cout << "Jumlah deret yang diinginkan: ";
  cin >> y;
  cout << endl;


  cout << 1;
  for (x = 2; x <= y; x++) {
     cout << " + " << x;
     total += x;
  }
  cout << " = " << total;

  cout << endl;
  return 0;
}
