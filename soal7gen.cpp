#include<stdio.h>
#include<conio.h>
void main()
{
int bil;
clrscr();
for (bil=20; bil<50; bil++)
{ if(bil %2 == 0)
printf("%5i",bil);
}
getch();
}