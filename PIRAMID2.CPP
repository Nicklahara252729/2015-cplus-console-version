#include<iostream.h>
#include<conio.h>
#include<stdio.h>


void main()
{
clrscr();
int a,b,c;
for (c=5;c>0;c--)
{
for (a=c;a>0;a--)
{
cout<<" ";
}
for (b=6-c;b>0;b--)
{
cout<<"* ";
}
cout<<endl;
}
getch();
}
