//Nama: Tirza Aurellia Wijaya//
//NIM: 24060122130047//
//Hari: Senin, 6 Maret 2023//
//Deskripsi: menentukan luas dan keliling layang-layang//
#include<stdio.h>
#include<stdlib.h>


int main(void) {
//Kamus//
    float s1; //sisi layang-layang 1//
    float s2; //sisi layang-layang 2//
    float d1; //diameter layang-layang 1//
    float d2; //diameter layang-layang 2//
    float Kel; //keliling layang-layang//
    float Luas; //luas layang-layang//
//Algoritma//
    printf("masukkan nilai sisi layang-layang 1 (m): ");
    scanf("%f", &s1);
    printf("\nmasukkan nilai sisi layang-layang 2 (m): ");
    scanf("%f", &s2);
    printf("\nmasukkan nilai diameter layang-layang 1 (m): ");
    scanf("%f", &d1);
    printf("\nmasukkan nilai diameter layang-layang 2 (m): ");
    scanf("%f", &d2);

    Kel = 2 * (s1 + s2);
    Luas = 0.5 * d1* d2;

    printf("\nnilai keliling layang-layang tersebut ialah %2.f m", Kel, s1,s2);
    printf("\nnilai luas layang-layang tersebut ialah %2.f m^2", Luas, d1,d2);
    return 0;
}
