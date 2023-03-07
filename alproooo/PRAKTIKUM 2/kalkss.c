//Nama: Tirza Aurellia Wijaya//
//NIM: 24060122130047//
//Hari: Senin, 6 Maret 2023//
//Deskripsi: menentukan hasil operasi yang berdasarkan sebuah inputan berupa karakter atau huruf//
#include <stdio.h>
#include <stdlib.h>


int main(void){
//Kamus//
    int A; //bilangan 1//
    int B; //bilangan 2//
    char huruf; //operasi yang akan dijalankan//
    int a;
    int b;
    int c;
    int e;
    int f;
    float d;
//Algoritma//
    printf ("masukkan nilai bilangan 1: ");
    scanf ("%d", &A);

    printf("\nmasukkan nilai bilangan 2: ");
    scanf ("%d", &B);

    printf("\nmasukkan jenis operator: ");
    scanf (" %c", &huruf);

    switch (huruf){
        case 'a':
            printf("hasilnya adalah: %d", A + B);
            break;
        case 'b':
            printf("hasilnya adalah: %d", A - B);
            break;
        case 'c':
            printf ("hasilnya adalah: %d", A * B);
            break;
        case 'd':
            printf ("hasilnya adalah: %f", (float)A / (float)B);
            break;
        case 'e':
            printf ("hasilnya adalah: %d", A / B);
            break;
        case 'f':
            printf ("hasilnya adalah: %d", A % B);
            break;
        default:
            printf ("Bukan pilihan menu yang benar");
            break;

    }
    return 0;
}
