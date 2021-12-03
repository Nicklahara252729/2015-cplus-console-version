#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int bil1,bil2,bil3,bil4,a,b,c,d;
bil1=9;
bil2=1;
bil3=3;
bil4=6;
a=(bil1+bil2)*bil3/bil4;
b=bil4-(bil1/bil3)*bil2;
c=a+b;
d=(a+b)*c;
printf("Masukkan nilai A=%d",a);
printf("\nMasukkan nilai b=%d",b);
printf("\nNilai c=%d",c);
printf("\nNilai d=%d",d);
getch();
}