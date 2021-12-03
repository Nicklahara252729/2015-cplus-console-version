#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
void main()
{
int i,j;
int data_jual[4][4];
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
cout<<"data ke-"<<i<<" "<<j<<endl;
cout<<"jumlah penjualan:";
cin>>data_jual[i][j];
}
}
cout<<"data penjualan pertahun"<<endl;
cout<<"-----------------------"<<endl;
cout<<"no 2012 2013 2014"<<endl;
cout<<"-----------------------"<<endl;
for(i=1;i<=3;i++)
{
cout<<setiosflags(ios::left)<<setw(5)<<i;
for(j=1;j<=3;j++)
{
cout<<setiosflags (ios::right)<<setw(4)<<j;
cout<<data_jual[i][j];
cout<" ";
}
cout<<endl;
cout<<endl;
}
cout<<"----------------------"<<endl;
getch();
}
