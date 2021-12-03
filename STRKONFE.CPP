#include "stdio.h"
#include "conio.h"
#include "string.h"
void main(){
clrscr();
char satu[20];
char dua[10];
char tiga[30];
printf("nama:");
gets(satu);
printf("kelas:");
gets(dua);
printf("jurusan:");
gets(tiga);
printf("\n\n");
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