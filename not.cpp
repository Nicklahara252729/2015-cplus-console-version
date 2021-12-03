#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
main()
{
float A,B,C;
cout<<"Masukkan Nilai A=";cin>>A;
/*proses*/
B=(A+4<10);
C=!(B);
cout<<"Program Ekspresi NOT"<<endl<<endl;
cout<<"Nilai A="<<A<<endl;
cout<<"Nilai B=(A+4<10)="<<B<<endl;
cout<<"Nilai C=!(B)"<<C;
getch();
}
