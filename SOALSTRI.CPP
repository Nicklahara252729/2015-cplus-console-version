#include "stdio.h"
#include "conio.h"
#include "string.h"
void main(){
clrscr();
char satu[30]="Nama: Nico Lahara";
char dua[25]="Kelas: X rpl2 ";
char tiga[50]="Jurusan: Rekayasa Perangkat Lunak";
printf("%s\n",(satu));
printf("%s\n",(dua));
printf("%s\n\n",(tiga));
printf("JIKA DIUBAH MENJADI HURUF KAPITAL SEMUA:\n");
printf("%s\n",strupr(satu));
printf("%s\n",strupr(dua));
printf("%s\n\n",strupr(tiga));
printf("jika diubah menjadi huruf kecil semua:\n");
printf("%s\n",strlwr(satu));
printf("%s\n",strlwr(dua));
printf("%s\n",strlwr(tiga));
getch();
}