/* Nama File    		: FrekNilTabel.c */
/* Deskripsi    		: Menampilkan nilai yang frekuensi kemunculannya lebih dari satu kali */
/* Pembuat      		: Tirza Aurellia - 24060122130047 */
/* Tanggal Pembuatan	: 21 Maret 2023 */		


#include <stdio.h>
#include <stdlib.h>

int main(void){
//Kamus//
  int N; //ukuran tabel, yang dalam kasus ini berjumlah 10//
  int count; //frekuensi kemunculan//
  int i; //counter//
  int j; //counter//
  int T[10] = {7, 4, 5, 7, 6, 5, 3, 5, 1, 4}; //tabel yang diinputkan dalam bentuk T[N]//

//Algoritma//
  for (i = 0; i <= 10 ; i++) {
        count = 1 ;
        for (j = i + 1; j <= 10 ; j++) {
            if (T[i] == T[j] && T[i] != 0) {
                count = count + 1;
                T[j] = 0 ;
            }
        }
        if (count > 1) {
            printf ("%d " , T[i]) ;
        }
    }

    return 0 ;

}
