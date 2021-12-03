#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;
main()
{
char kata[30];
cout<<"masukkan sembarang kata dengan huruf besar=";
gets(kata);
strlwr(kata);
cout<<"hasil perubahan="<<kata;
getch();
}
