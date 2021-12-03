#include<conio.h>
#include<iomanip.h>
#include<iostream.h>
#include<stdio.h>
int main()
{
int i,j,k;
int matrix[3][3];
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
cout<<"masukkan nilai angka pada baris ke"<<i<<"dan kolom ke"<<j<<":";
cin>>matrix[i][j];
}
cout<<endl;
}
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
cout<<matrix[i][j]<<"";
}
cout<<endl;
return(0);
}


