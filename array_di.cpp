#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<iomanip.h>
void main ()
{
int i;
char nama[5][20];
int nilai1[5];
int nilai2[5];
int hasil[5];
for(i=1;i<=2;i++)
{
cout<<"Data ke-"<<i<<endl;
cout<<"Nama siswa:";gets(nama[i]);
cout<<"Nilai MidTest:";cin>>nilai1[i];
cout<<"Nilai Final:";cin>>nilai2[i];
hasil[i]=(nilai1[i]*0.40)+(nilai2[i]*0.60);
cout<<endl;
}
cout<<"____________________________________";
cout<<"_____"<<endl;
cout<<"No.Nama Siswa     Nilai     Nilai";
cout<<"Hasil"<<endl;
cout<<"                  Midtest   Final";
cout<<"Ujian"<<endl;
cout<<"____________________________________";
cout<<"_____"<<endl;
for(i=1;i<=2;i++)
{
cout<<setiosflags(ios::left)<<setw(4)<<i;
cout<<setiosflags(ios::left)<<setw(20)<<nama[i];
cout<<setprecision(2)<<" "<<nilai1[i];
cout<<setprecision(2)<<" "<<nilai2[i];
cout<<setprecision(2)<<" "<<hasil[i]<<endl;
}
cout<<"___________________________________";
cout<<"______"<<endl;
getch();
}

