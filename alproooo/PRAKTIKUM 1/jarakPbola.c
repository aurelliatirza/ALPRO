//Nama: Tirza Aurellia Wijaya//
//NIM: 24060122130047//
//Hari: Senin, 6 Maret 2023//
//Deskripsi: menentukan jarak parabola yang ditempuh sebuah bola//

#include<stdio.h>
#include<stdlib.h>

#define g 9.8
int main(void) {
//Kamus//
   float velocity; //kecepatan awal//
    float time; //waktu tempuh//
    float jarak; //jarak yang ditempuh//
//Algoritma//
    printf("masukkan nilai kecepatan awal (m/s): ");
    scanf("%f", &velocity);
    printf("\nmasukkan nilai waktu (s): ");
    scanf("%f", &time);
    printf("gravitasi bumi ialah %f\n", g);

    jarak = velocity * time - 0.5 * (g * time * time);
    printf("jarak parabola ialah %f m", jarak);
}

