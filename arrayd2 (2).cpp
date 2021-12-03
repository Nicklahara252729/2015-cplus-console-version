#include<conio.h>
#include<stdio.h>
#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
int i,j;
int data_jual[4][4];
for(i=1;i<=4;i++)
{
for(j=1;j<=3;j++)
{
cout<<"Data ke-"<<i<<""<<j<<endl;
cout<<"Jumlah penjualan:";
cin>>data_jual[i][j];
}
}
for(i=1;i<=4;i++)
{
cout<<setiosflags(ios::left)<<setw(5)<<i;
	for(j=1;j<=3;j++)
{
cout<<setiosflags(ios::right)<<setw(4);
cout<<data_jual[i][j];
cout<<"  ";
}
cout<<endl;
}
cout<<"----------------------"<<endl;
getch();
}
