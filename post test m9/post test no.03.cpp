#include <iostream>

using namespace std;
int main()
{
    int data[100];
    int jumlah,temp,n;
    float rata,total=0;

    cout<<"Banyaknya Data : ";cin>>n;

    for(int i=0;i<n;i++)
    {
    cout<<"Data ke - ";cin>>data[i];
    }

    cout<<"\n"<<endl;
    cout<<"Banyaknya kemunculan data : "<<endl;

    for(int h=0;h<n;h++)
    {
        jumlah=0;
        for(int i=0;i<n;i++)
    {
        if(data[h]==data[i])
            jumlah++;
    }
    if(data[h] != data[h-1])
        cout<<data[h]<<" : " <<jumlah<<endl;
    }

    for( int i=0;i<n;i++)
    {
        total+=data[i];
    }
    rata=total/n;
    cout<<"Hasil rata-rata nya adalah : "<<rata<<endl;
    return 0;
}
