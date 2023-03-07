//Nama: Tirza Aurellia Wijaya//
//NIM: 24060122130047//
//Hari: Senin, 6 Maret 2023//
//Deskripsi: menentukan jarak dari gerak lurus berubah beraturan//


#include <stdio.h>
#include <stdlib.h>

int main(){
//Kamus//
    float s; //s adalah jarak yang ditempuh//
    float v0; //v0 adalah nilai kecepatan awal//
    float a; //a adalah percepatan//
    float t; //t adalah waktu tempuh//

//Algoritma//

    printf("masukkan nilai kecepatan awal: ");
    scanf("%f", &v0);
    printf("\n\nmasukkan nilai percepatan: ");
    scanf("%f", &a);
    printf("\n\nmasukkan nilai waktu tempuh: ");
    scanf("%f", &t);

    s = v0*t + 0.5*(a*t*t);
    printf("hasil jarak yang ditempuh adalah %f  m",s);
    return 0;
}


