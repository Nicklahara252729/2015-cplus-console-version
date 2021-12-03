#include <stdio.h>
#include <conio.h>
main ()
{
int bil=1;
clrscr();
do
{
if(bil>=6)
break;
printf("%d",bil);
printf("masukan bilangan anda=");
scanf ("%d");
}
while (bil++);
getch();
}

