//Nama File : TarifParkir.c
//Deskripsi : Menghitung dan menampilkan biaya
// parkir sesuai dengan ketentuan yang sudah di sediakan pada layar.
//Nama      : Brianando Garneda Liandra
//NIM       : 24060121140096
//Kelas     : B1


#include <stdio.h>

int main (){
	//Kamus
	int i,b;
	
	//Algoritma
	printf("Membuat Program Biaya Parkir \n");
	printf("Jam lamanya parkir  : ");
	scanf("%d", &i);
	
	if ( i > 2) {
		b = 2000 + (i-2) * 500 ;
		printf(" Biaya Parkir sebesar: %d", b);
    }
	else{
		b = 2000;
		printf(" Biaya Parkir sebesar: %d", b);
	}
	return 0;
}
