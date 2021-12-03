#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
char satu[40]="Jurusan Rekayasa Perangkat Lunak";
char dua[40]="SMK Negeri 9 Medan";
clrscr();
strcat(satu, dua);
printf("hasil penggabungannya:%s \n",satu);
printf("jika diubah menjadi huruf kapital semua:\n");
printf("%s\n",strupr(satu));
printf("jika diubah menjadi huruf kecil semua:\n");
printf("%s", strlwr(satu));
getch();
}