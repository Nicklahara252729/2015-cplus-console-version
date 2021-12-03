#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<ctype.h>
void main()
{
char a1[20],a2[20];
cout<<"masukkan kata -1=";
cin>>a1;
cout<<"masukkan kata -2=";
cin>>a2;
strcat(a1,a2);
cout<<"hasil penggabungannya "<<a1;
getch();
}