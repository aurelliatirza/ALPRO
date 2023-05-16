/*Nama: Tirza Aurellia */
/*NIM: 24060122130047*/
/*Hari/Tanggal: Selasa, 16 Mei 2023*/
#include <stdio.h>

int main() {
    int T[] = {1,3,5,-8,12,90,3,5}; // tabel integer berurutan
    int x = 90; // data yang ingin dicari
    int n = 100;
    int i;
    int ix;

    i = 0;
    while (i < n && T[i] != x)
    {
        i++;
    }
    

    if (T[i] == x)
    {
        ix = i;
    }
    else
    {
        ix = 0;
    }
    
    printf ("\n %d", ix,i);

    return 0;
}