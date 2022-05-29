//Nama File : GajiKerja.c
//Deskripsi : Menghitung dan menampilkan biaya
// upah kerja pada layar.
//Nama      : Brianando Garneda Liandra
//NIM       : 24060121140096
//Kelas     : B1

#include <stdio.h>

int main()
{
    //Kamus
	int g,i,U1,U;


	//Algoritma
	printf("Membuat Program Upah Kerja \n");
	printf("Jam Kerja per Minggu  : ");
	scanf("%d", &i);
	printf("Golongan Karyawan  : ");
	scanf("%d", &g);

	switch (g) {
    case 1 :
        U = 1000;
        if ( i <= 40) {
            U1 = i * U;
            printf(" Upah kerja sebesar : %d", U1);
        }
        else{
            U1 = i * U + ((i-40) * U * 1.5);
            printf(" Upah kerja sebesar : %d", U1);
        }
        break;
    case 2 :
        U = 1500;
        if ( i <= 40) {
            U1 = i * U;
            printf(" Upah kerja sebesar : %d", U1);
        }
        else{
            U1 = i * U + ((i-40) * U * 1.5);
            printf(" Upah kerja sebesar : %d", U1);
        }
        break;
    case 3 :
        U = 2000;
        if ( i <= 40) {
            U1 = i * U;
            printf(" Upah kerja sebesar : %d", U1);
        }
        else{
            U1 = i * U + ((i-40) * U * 1.5);
            printf(" Upah kerja sebesar : %d", U1);
        }
        break;
    case 4 :
        U = 2500;
        if ( i <= 40) {
            U1 = i * U;
            printf(" Upah kerja sebesar : %d", U1);
        }
        else{
            U1 = i * U + ((i-40) * U * 1.5);
            printf(" Upah kerja sebesar : %d", U1);
        }
        break;
    default :
        printf("Bukan Pilihan Golongan yang Benar");
	}


	return 0;
}
