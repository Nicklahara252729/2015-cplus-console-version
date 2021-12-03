#include<stdio.h>
#include<conio.h>
void main()
{
int index, nilai[10];
clrscr();
/* input nilai siswa*/
printf("input nilai 10 siswa \n");
for (index=0;index<10;index++)
{
printf("siswa%i:",index+1);
scanf("%i",&nilai[index]);
}
/*tampilkan nilai siswa*/
printf("nilai siswa yang telah diinput");
for (index=0;index<10;index++)
{
printf("%5.0i",nilai[index]);
}
getch();
}
