#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
int jabatan, hutang;
float gajikotor,gajipokok,gajilembur,pph,gajibersih,jamkerja;
clrscr();
printf("Kode Status Jabatan :\n");
printf("1.Direktur\n2.Manager\n3.Sekretaris\n4.Bendahara\n");
printf("--------------------------------------------------------\n");
printf("                 PEMBAYARAN GAJI PEGAWAI                \n");
printf("--------------------------------------------------------\n");
printf("Ketikkan Kode Jabatan : ");cin>>jabatan;
if(jabatan=1)
{gajipokok=4500000;
}else
if(jabatan=2)
{gajipokok=3500000;
}else
if(jabatan=3)
{gajipokok=3000000;
}else
if(jabatan=4)
{gajipokok=2500000;
}
printf("Gaji Pokok           : Rp.%5.2lf",gajipokok);
printf("\nJumlah Jam Kerja/Bulan : ");cin>>jamkerja;
if (jamkerja>=48)
{gajilembur=jamkerja*30000;
printf("Gaji Lembur              : Rp.%5.2lf",gajilembur);
}else
printf("Gaji Lembur          : Anda Tidak Mendapatkan Gaji Lembur");
gajikotor=gajipokok+gajilembur;
printf("\nGaji Kotor             : Rp.%5.2lf",gajikotor);
pph=gajikotor*0.1;
printf("\nPPH                    : Rp.5.2lf",pph);
printf("\nPinjaman               : Rp.");cin>>hutang;
printf("-----------------------------------------------------\n");
gajibersih=gajikotor-(pph+hutang);
printf("Total Gaji           : Rp.%5.2lf",gajibersih);
getch();
return ;
}