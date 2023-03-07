//Nama: Tirza Aurellia Wijaya//
//NIM: 24060122130047//
//Hari: Senin, 6 Maret 2023//
//Deskripsi: menentukan nama bulan berdasarkan sebuah inputan berupa bilangan integer//
#include <stdio.h>
#include <stdlib.h>


int main(void){
//Kamus//
    int nomer;//indeks yang akan dicek//
//Algoritma//
    printf("masukkan nomer bulan: ");
    scanf("%d", &nomer);

    if (nomer >= 1 && nomer <= 12){
        if (nomer == 1){
            printf("januari");
        }
        else if (nomer == 2){
            printf ("februari");
        }
        else if (nomer == 3){
            printf ("maret");
        }
        else if (nomer == 4){
            printf ("april");
        }
        else if (nomer == 5){
            printf("mei");
        }
        else if (nomer == 6){
            printf ("juni");
        }
        else if (nomer == 7){
            printf("juli");
        }
        else if (nomer == 8){
            printf("agustus");
        }
        else if (nomer == 9){
            printf("september");
        }
        else if (nomer == 10){
            printf("oktober");
        }
        else if (nomer == 11){
            printf("november");
        }
        else{
            printf ("desember");
        }
    }
    else{
        printf ("bukan nomer bulan");
    }
}
