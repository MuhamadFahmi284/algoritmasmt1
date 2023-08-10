#include <iostream>
#include <conio.h>
using namespace std;

int data, dsc;

main(){
    cout << "Masukan Banyak Data : ";
    cin >> data;

    int nilai[data];

    for(int i=0; i<data; i++){
        cout << "Data  " << (i+1) << " : ";
        cin >> nilai[i];
    }

    for(int c=1;c<data;c++)
    {
        for(int d=0;d<data-c;d++)
        {
            if(nilai[d] < nilai[d+1])
            {
                dsc=nilai[d];
                nilai[d]=nilai[d+1];
                nilai[d+1]=dsc;
            }
        }
    }

    cout << endl << "Hasil Pengurutan dari urutan besar ke terkecil\n";
    for(int i=0;i<data;i++)
    {
        cout << " " << nilai[i];
    }
    cout << endl;
    getch();
    return 0;
}

