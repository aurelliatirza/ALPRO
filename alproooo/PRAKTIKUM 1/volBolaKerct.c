//Nama: Tirza Aurellia Wijaya//
//NIM: 24060122130047//
//Hari: Senin, 6 Maret 2023//
//Deskripsi: menentukan volume bola dan volume kerucut//
#include<stdio.h>
#include<stdlib.h>


#define phi 3.1415
int main(void) {
    float r;
    float Vb;
    float Vk;

    printf("masukkan nilai jari-jari lingkaran (m): ");
    scanf("%f", &r);
    printf("kontanta untuk lingkaran ialah %f\n", phi);

    Vb = 4 / 3 * (phi * r * r *r);
    Vk = 0.5 * Vb;


    printf("nilai volume bola adalah %2.f m^3", Vb, phi, r);
    printf("\nnilai volume kerucut adalah %2.f m^3", Vk,Vb);
    return 0;
}
