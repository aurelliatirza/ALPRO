/* Nama File    		: JumFrekNilTabel.c */
/* Deskripsi    		: Menjumlahkan semua elemen yang frekuensi kemunculannya lebih dari 1 kali */
/* Pembuat      		: Tirza Aurellia - 24060122130047 */
/* Tanggal Pembuatan	: 21 Maret 2023 */		


#include <stdio.h>
#include <stdlib.h>

int main(void){
//Kamus//
    int N; //ukuran tabel, dalam kasus ini berukuran 10//
    int count; //frekuensi kemunculan//
    int sum; //jumlah nilai yang frekuensi kemunculan yang lebih dari 1 kali//
    int i; //counter//
    int j; //counter//
    int T[10] = {7, 4, 5, 7, 6, 5, 3, 5, 1, 4}; //tabel yang diinputkan dalam bentuk T[N]//

//Algoritma//
  for(i = 0; i <= 10; i++){
    count = 1;
    for (j = i + 1; j <= 10; j++){
        if (T[i] != 0 && T[i] == T[j]){
            count = count + 1;
            T[j] = 0;
        }
    }
    if (count > 1){
        sum = sum + (count*T[i]);
    }
  }
  printf(" jumlah nilai yang frekuensi kemunculannya lebih dari 1 kali ialah: %d ", sum);
  return 0;

}
