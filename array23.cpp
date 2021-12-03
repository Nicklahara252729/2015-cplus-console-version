#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
void main()
{
int i,j;
int data_array[4][4];
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
cout<<"data ke-"<<i<<" "<<j<<endl;
cout<<"jumlah data:";
cin>>data_array[i][j];
}
}
cout<<"data array dengan 4 baris 4 kolom"<<endl;
cout<<"------------------"<<endl;
cout<<"no    A    B    C "<<endl;
cout<<"------------------"<<endl;
for(i=1;i<=3;i++)
{
cout<<setiosflags(ios::left)<<setw(3)<<i;
for(j=1;j<=3;j++)
{
cout<<setiosflags (ios::right)<<setw(4)<<j;
cout<<data_array[i][j];
cout<" ";
}
cout<<endl;
cout<<endl;
}
cout<<"-------------------"<<endl;
getch();
}
