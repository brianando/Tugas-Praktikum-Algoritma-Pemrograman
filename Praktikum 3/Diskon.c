//Nama File : Diskon.c
//Deskripsi : Menghitung dan besarnya harga setelah di diskon pada layar.
//Nama      : Brianando Garneda Liandra
//NIM       : 24060121140096
//Kelas     : B1

#include <stdio.h>

int main (){
	//Kamus
	int i;
	float d,A;
	char b;
	
	//Algoritma
	printf("Membuat Program Harga Diskon \n");
	printf("Harga Awal Produk  : ");
	scanf("%d", &i);
	printf("Masukan Jenis Diskon  : ");
	scanf(" %c", &b);
	
	switch(b){
		case 'A' :
			d = 0.1;
			A = i - (i * d);
			printf("Harga Akhir Produk adalah %.2f", A);
			break;
			
		case 'B' :
			d = 0.15;
			A = i - (i * d);
			printf("Harga Akhir Produk adalah %.2f", A);
			break;
			
		case 'C' :
			d = 0.2;
			A = i - (i * d);
			printf("Harga Akhir Produk adalah %.2f", A);
			break;
			
		default : 
			printf("Bukan pilihan Jenis Diskon yang benar");
	}
	return 0;
}
