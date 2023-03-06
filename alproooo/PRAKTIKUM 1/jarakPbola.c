#include<stdio.h>
#include<stdlib.h>


#define g 9.8
int main(void) {
   float velocity;
    float time;
    float jarak;

    printf("masukkan nilai kecepatan awal (m/s): ");
    scanf("%f", &velocity);
    printf("\nmasukkan nilai waktu (s): ");
    scanf("%f", &time);
    printf("gravitasi bumi ialah %f\n", g);

    jarak = velocity * time - 0.5 * (g * time * time);
    printf("jarak parabola ialah %f m", jarak);
}

