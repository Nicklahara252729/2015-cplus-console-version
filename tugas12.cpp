#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
int nilai[4];
int i,j;
float jumlah,rata;
char nama[20];
cout<<"Masukan nama Mahasiswa:";
gets(nama);
cout<<"Masukan nilai ujian mahasiswa, \n";
cout<<endl;

for(i=0;i<=3;i++)
{
cout<<"Nilai yang ke-"<<(i)<<":";
cin>>nilai[i];
}
cout<<endl;
cout<<"Mahasiswa yang bernama "<<nama<<" mempunyai nilai sebagai berikut:";
for(i=0;i<=3;i++)
{
cout<<endl;
cout<<"\n Nilai ke-"<<(i)<<":"<<nilai[i];
}
for(j=0;j<=3;j++)
{
cout<<endl;
jumlah=nilai[j]+jumlah;
}
 rata=jumlah/4;
cout<<"\n Jumlah Nilai Adalah:"<<jumlah;
cout<<"\n Rata-rata Nilai Adalah:"<<rata;

if(rata>=75)
{
cout<<"\n Tuntas";
}
else
{
cout<<"\n Remedial";
}
cout<<endl;
cout<<"\n\n Terima Kasih.";
getch();
}