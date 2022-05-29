//Nama File     : SEQSearchX1.c
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


void SEQSearchX1(int T[], int N, int *K, int X)
{
    //Kamus Lokal
    int i;

    //Algoritma
    i = 0;
    while(i < N-1 && T[i] != X){
        printf("%d\n", i);
        i++;
    }
    if(T[i] == X){
        *K = i;
    }
    else{
        *K = 0;
    }
}


