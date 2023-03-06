#include<stdio.h>
#include<stdlib.h>



int main(void) {
    float m;
    float v0;
    float r;
    float F;

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

