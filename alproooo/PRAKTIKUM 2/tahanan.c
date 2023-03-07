//Nama: Tirza Aurellia Wijaya//
//NIM: 24060122130047//
//Hari: Senin, 6 Maret 2023//
//Deskripsi: menentukan total nomor tahanan yang tidak negatif//
#include <stdio.h>
#include <stdlib.h>

int main(void){
// Kamus //
    int a;  //masukan nilai tahanan 1//
    int b;  //masukan nilai tahanan 2//
    int c;  //masukan nilai tahanan 3//
    int x;  //hasil operasi penjumlahan 3 tahanan//
// Algoritma //
    printf ("masukkan nilai tahanan 1: ");
    scanf ("%d", &a);

    printf ("\nmasukkan nilai tahanan 2: ");
    scanf ("%d", &b);

    printf ("\nmasukkan nilai tahanan 3: ");
    scanf ("%d", &c);

    x = a + b + c;

    if (a < 0 || b < 0 || c < 0){
        printf ("Masukkan tahanan tidak boleh negatif");
    }
    else {
        printf ("%d", x);
    }
    return 0;
}
