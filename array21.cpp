#include<stdio.h>
void main()
{
int baris,kolom,bil[2][5]
={{1,2,35,7,10},{6,7,4,2,1}};
for (baris=0;baris<2;baris++)
for (kolom=0;kolom<5;kolom++)
printf("data[%d,%d]=%d\n",baris,kolom,bil[baris][kolom]);
}

