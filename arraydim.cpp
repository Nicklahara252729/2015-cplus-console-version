#include<stdio.h>
#include<string.h>
void main()
{
char jurusan [25], kelas[10], nis[10], nama[20];
printf("masukkan nama anda:");
gets(nama);
printf("masukkan nis anda:");
gets(nis);
/***** cari jurusan *****/
switch(nis[2])
{
case'1':strcpy(jurusan, "teknik informatika");
break;
case'2':strcpy(jurusan, "rekayasa perangkat lunak");
break;
case'3':strcpy(jurusan, "teknik komputer");
break;
case'4':strcpy(jurusan, "teknik komputer jaringan");
break;
default:printf("anda salah memasukkan nis.");
printf("coba anda periksa lagi !");
break;
}
if (nis[4]=='5')
{
strcpy(kelas,"x rpl-2");
}
else
{
if (nis[4]=='3')
{
strcpy(kelas,"x rpl-2");
}
else
printf("anda salah memasukkan nis. periksa lagi !");
}
/***** tampilkan data mahasiswa *****/
printf("\n<< data siswa smkn9 medan>>\n");
printf("nama:%s\n",nama);
printf("nis:%s\n",nis);
printf("jurusan:%s\n",jurusan);
printf("kelas:%s\n",kelas);
}
