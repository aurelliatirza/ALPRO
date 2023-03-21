/* Nama File    		: SimetriTabel.c */
/* Deskripsi    		: Membandingkan 2 tabel simetri atau tidak */
/* Pembuat      		: Tirza Aurellia - 24060122130047 */
/* Tanggal Pembuatan	: 21 Maret 2023 */		


#include <stdio.h>
#include <stdlib.h>

int main(){

//Kamus//
    int N; //ukuran tabel 1//
    int M; //ukuran tabel 2//
    int T1[10] = {7, 4, 5, 7, 6, 5, 3, 5, 1, 4}; //tabel 1 yang diinputkan dalam bentuk T[N]//
    int T2[10] = {1, 4, 5, 7, 6, 5, 3, 5, 1, 4}; //tabel 2 yang diinputkan dalam bentuk T[M]//
    int count; //menghitung jumlah anggota yang sama//
    int i; //counter//

//Algoritma//
    N = 10;
    M = 10;
    if (N == M){
        count = 0;
        for (i = 0; i <= N; i++){
            if (T1[i] == T2[i]){
                count = count + 1;
            }
        }
       if (count == N){
        printf ("simetri");
       } 
       else{
        printf ("tidak simetri");
       }
    }
    else{
        printf ("tidak simetri");
    }
    return 0;
}