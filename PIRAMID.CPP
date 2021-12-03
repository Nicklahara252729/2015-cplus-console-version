#include<iostream.h>
#include<conio.h>
#include<stdio.h>


void main()
{
clrscr();
int a,b,c;
for (c=4;c>0;c--)
{
for (a=c;a>0;a--)
{
cout<<" ";
}
for (b=5-c;b>0;b--)
{
cout<<"* ";
}
cout<<endl;
}
getch();
}
