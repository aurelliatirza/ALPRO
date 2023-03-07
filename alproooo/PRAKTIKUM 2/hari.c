//Nama: Tirza Aurellia Wijaya//
//NIM: 24060122130047//
//Hari: Senin, 6 Maret 2023//
//Deskripsi: menentukan nama hari berdasarkan sebuah inputan berupa bilangan integer//
#include <stdio.h>
#include <stdlib.h>


int main(void){
//Kamus//
    int nomer; //indeks yang akan dicek//
//Algoritma//
    printf("masukkan nomer hari: ");
    scanf("%d", &nomer);

    if (nomer >= 1 && nomer <= 7){
        if (nomer == 1){
            printf("senin");
        }
        else if (nomer == 2){
            printf ("selasa");
        }
        else if (nomer == 3){
            printf ("rabu");
        }
        else if (nomer == 4){
            printf ("kamis");
        }
        else if (nomer == 5){
            printf("jumat");
        }
        else if (nomer == 6){
            printf ("sabtu");
        }
        else{
            printf ("minggu");
        }
    }
    else{
        printf ("bukan nomer hari");
    }
}
