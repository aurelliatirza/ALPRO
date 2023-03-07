//Nama: Tirza Aurellia Wijaya//
//NIM: 24060122130047//
//Hari: Senin, 6 Maret 2023//
//Deskripsi: menentukan besarnya gaya sentripetal sebuah benda//

#include<stdio.h>
#include<stdlib.h>

int main(void) {
//Kamus//
    float m; //massa//
    float v0; //kecepatan awal//
    float r; //jari-jari//
    float F; //gaya sentripetal//
//Algoritma//
    printf("masukkan nilai massa (kg): ");
    scanf("%f", &m);
    printf("\nmasukkan nilai kecepatan (m/s): ");
    scanf("%f", &v0);
    printf("\nmasukkan nilai jari-jari (m): ");
    scanf("%f", &r);

    F = m * (v0 * v0 /r);
    printf("besar gaya sentripetal yang terjadi: %2.f Newton", F);
    return 0;
}

