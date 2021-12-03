#include <stdio.h>
#include <conio.h>
main ()
{
int bil;
clrscr();
for (bil=1; bil<=10;++bil)
{
if (bil==0)
continue;
printf("%d",bil);
}
getch();
}
