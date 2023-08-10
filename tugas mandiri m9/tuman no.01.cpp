#include <iostream>
using namespace std;

void gabung(int a[], int b[]){ int c[100],i,x=0;
    int tukar;
        for (i=0;i<6;i++){
            c[x]=a[i]; x++;
        }
        for (i=0;i<4;i++){
            c[x]=b[i]; x++;
        }
    cout<<"Hasil penggabungan : ";
    for(i=0;i<10;i++){
        for(x=0;x<10;x++){
            if (c[i]<c[x]){
            tukar=c[i]; c[i]=c[x]; c[x]=tukar;
                }
            }
    }
    for(i=0;i<10;i++)cout<<c[i]<<" ";
}

main(){
    int a[100]={2,4,3,7,5,1};
    int b[100]={9,1,4,6};
    int i;

    cout<<"Data array 1 : ";
        for (i=0;i<6;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    cout<<"Data array 2 : ";
        for (i=0;i<4;i++)
    cout<<b[i]<<" ";
    cout<<endl;
    gabung(a,b);
}
