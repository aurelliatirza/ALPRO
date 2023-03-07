//Nama: Tirza Aurellia Wijaya//
//NIM: 24060122130047//
//Hari: Senin, 6 Maret 2023//
//Deskripsi: menentukan jenis bilangan (integer atau bukan)//
#include <stdio.h>
#include <stdlib.h>


int main(void){
//Kamus//
    int bilangan; //bilangan yang akan dicek//
//Algoritma//
    printf("masukkan nilai bilangan: ");
    scanf("%d", &bilangan);

    if (bilangan > 0){
        printf("bilangan bulat positif");
    }
    else if (bilangan == 0){
        printf("nol");
    }
    else if (bilangan < 0){
        printf("bilangan bulat negatif");
    }
    else{
        printf("tidak termasuk bilangan bulat");
    }
    return 0;
}
