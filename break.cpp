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
}
while (bil++);
getch();
}

