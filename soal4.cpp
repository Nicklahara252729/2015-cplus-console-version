#include<iostream.h>
#include<conio.h>
main()
{
char nama[80];
int tombol,cacah=0;
float nilai, jumlah=0,rerata;
{
cout<<"menghitung rerata nilai\n";
cout<<"menghitung nilai,"<<"\n\n";
do
{
cacah ++;
cout<<"data ke-"<<cacah<<"=";
cin>>nilai;
jumlah=jumlah+nilai;
}
while(nilai>=9);
rerata=jumlah/cacah;
cout<<"\nbanyaknya data="<<cacah;
cout<<"\n jumlah="<<jumlah;
cout<<"\n rerata="<<rerata;
getch();
}
