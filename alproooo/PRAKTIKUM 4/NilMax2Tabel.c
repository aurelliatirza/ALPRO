/* Nama File    		: NilMax2Tabel.c */
/* Deskripsi    		: Mencari nilai terbesar kedua dari sebuah tabel */
/* Pembuat      		: Tirza Aurellia - 24060122130047 */
/* Tanggal Pembuatan	: 21 Maret 2023 */		


#include <stdio.h>
#include <stdlib.h>

int main(void){
//Kamus//
    int N; //ukuran tabel yang dalam kasus ini berjumlah 10//
    int i; //counter//
    int max1; //nillai maksimal pertama//
    int max2; //nilai maksimal kedua//
    int T[10] = {6,4,5,7,6,5,3,5,1,4}; //tabel yang diinputkan dalam bentuk T[N]//

//Algoritma//
    max1 = 0;
    max2 = 0;
    for (i=1; i<=10; i++){
        if (T[i] > max1){
            max2 = max1;
            max1 = T[i];
        }
        else if (T[i] > max2 && T[i] < max1){
            max2 = T[i];
        }
    }
    printf ("nilai terbesar kedua ialah: %d", max2);
    return 0;
}
