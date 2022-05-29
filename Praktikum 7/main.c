//Nama File     : main.c
//Nama          : Brianando Garneda Liandra
//NIM           : 24060121140096
//Kelas         : B1

//Soal
/*Diketahui sebuah tabel berisi harga integer [1...N], yang telah diisi. Tuliskanlah
algoritma sekuensial kemudian implementasikan dalam bahasa C. Jika, diberikan sebuah X
yang merupakan bilangan integer. Algoritmanya mencari apakah X ada di dalam tabel array
atau tidak. Kemudian di cek apakah X merupakan bilangan positif atau tidak.*/


//Dekripsi      : Mencari harga X dalam Tabel T [ 1...N ] secara sekuensial
// mulai dari T1.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "SEQSearchX1.h"

//Program Utama
int main()
{
    //Kamus
    int A[] = {1,3,5,-8,12,90,3,50};
    int N = sizeof(A)/ sizeof(A[0]);
    int X = 12;
    int K;

    //Algoritma
    printf("Membuat Program Mencari harga X dalam tabel T (tanpa boolean) \n");

    SEQSearchX1(A, N, &K, X);
    if(K != -1){
        printf("X ditemukan di index ke- %d\n", K);
        if (X < 0){
            printf("X merupakan bilangan NEGATIF \n");
        }
        else{
            printf("X merupakan bilangan POSITIF \n");
        }
    }
    else{
        printf("X Tidak ditemukan\n");
    }

    return 0;
}





