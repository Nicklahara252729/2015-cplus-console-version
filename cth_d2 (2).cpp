#include<conio.h>
#include<iomanip>
#include<iostream>

using namespace std;
int main()
{
int i,j;
int matrix[4][3];
for(i=1;i<=3;i++)
{
for(j=1;j<=4;j++)
{
cout<<"Data ke "<<i<<" - "<<j<<":";
cin>>matrix[i][j];
}
cout<<endl;
}
for(i=1;i<=3;i++)
{
for(j=1;j<=4;j++)
{
cout<<setiosflags(ios::left)<<setw (4);
cout<<setiosflags(ios::right)<<setw (3);
cout<<matrix[i][j]<<" ";
}
cout<<endl;
}
getch();
}


