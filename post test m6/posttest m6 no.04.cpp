#include<iostream>
using namespace std;

int main() {
    int array[10], data;
    float angka, total = 0, rata;


    cout << "Mencari Rata-rata dari sebuah Data" << endl;
    cout << endl;
    cout << "Banyak Data\t: ";
    cin >> data;
    cout << endl;

    for (int i = 1; i <= data; i++) {
        cout<<"Data nilai ke-"<<i<<" : ";
        cin >> angka;
        total += angka;
    }

    cout << endl;
    cout << "Total\t\t : " << total << endl;
    rata = total / data;
    cout << "Rata-rata\t : " << rata;
    return 0
    ;
}

