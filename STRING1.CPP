#include "stdio.h"
#include "conio.h"
#include "string.h"
void main(){
clrscr();
char nama[25];
strcpy(nama,"Nico Lahara");
printf("\n nama: %s \n",nama);
printf("Banyaknya karakter nama anda adalah: %i",strlen (nama));
getch();
}