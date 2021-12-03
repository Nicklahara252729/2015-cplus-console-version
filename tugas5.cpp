#include<conio.h>
#include<stdio.h>
#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
int nilai;
int i,j;
float jumlah rata;
char nama[20];
cout<<"masukan Nama Mahasiswa:";
gets(nama);
cout<<"Masukkan nilai ujian mahasiswa,\n";
cout<<endl;
for(i=0;i<=3;i++)
{
cout<<"Nilai yang ke-"<<i<<":";
cin>>;
}
cout<<endl;
cout<<"Mahasiswa yang bernama"<<nama<<"mempunyai nilai sebagai berikut:";
for(i=0;i<=3;i++)
{
cout<<endl;
cout<<"\n Nilai ke-"<<i<<":";
}
for(j=0;j<=3;j++)
{
cout<<endl;
jumlah=jumlah+nilai;
}
rata=jumlah/4;
cout;
cout<<"\n jumlah Nilai adalah:";
cout<<"\n Rata - rata nilai adalah:";
if (rata>=75)
{
cout<<"\n Tuntas";
}
else
{
cout"\nramedial";
}
cout<<endl;
cout<<"\n terimakasih";
getch();
}

