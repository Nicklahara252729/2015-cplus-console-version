#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
main()
{
int i,f,j;
for(i=1;i<=5;i++)
{
printf("\n");
for(f=5;f>=i;f--)
{
printf("  ");
}
for(j=1;j<=i;j++)
printf("%i",j);
}
getch();
}
