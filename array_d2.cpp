#include<conio.h>
#include<iomanip.h>
#include<iostream.h>
#include<stdio.h>
void main()
{
int i,j;
int data[2][5]={{2,3,4,5},{4,2,6,2,7}};
for(i=0;i<2;i++)
{
for(j=0;j<5;j++)
{
cout<<data[i][j];
cout<<"   ";
}
cout<<endl;
}
getch();
}

