#include<stdio.h>
#include<conio.h>
void main()
{
int bil;
clrscr();
for (bil=3; bil<101; bil++)
{ if(bil %2 == 1)
printf("%5u",bil);
}
getch();
}