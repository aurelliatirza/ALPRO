//Nama: Tirza Aurellia Wijaya//
//NIM: 24060122130047//
//Hari: Senin, 6 Maret 2023//
//Deskripsi: menentukan jenis segitiga//
#include <stdio.h>
#include <stdlib.h>

int main(void){
//Kamus//
    int a;
    int b;
    int c;
//Algoritma//
    printf ("masukkan nilai sisi segitiga 1: ");
    scanf ("%d", &a);

    printf ("\nmasukkan nilai sisi segitiga 2: ");
    scanf ("%d", &b);

    printf("\nmasukkan nilai sisi segitiga 3: ");
    scanf ("%d", &c);

    if (a == b && a == c){
        printf ("segitiga sama sisi");
    }
    else if (a == b && a != c || c == a && c != b || b == c && b != a){
        printf ("segitiga sama kaki");
    }
    else if (a < 0 || b < 0 || c < 0){
        printf ("terdapat nilai yang bukan sisi segitiga");
    }
    else {
        printf ("segitiga sembarang");
    }
    return 0;
}
