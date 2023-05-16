/*Nama: Tirza Aurellia */
/*NIM: 24060122130047*/
/*Hari/Tanggal: Selasa, 16 Mei 2023*/
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int swapped;

    for (i = 0; i < n-1; i++) {
        swapped = 0;
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }

        // Jika tidak ada elemen yang ditukar pada iterasi ini,
        // maka array sudah terurut, dan kita dapat keluar dari loop.
        if (swapped == 0)
            break;
    }
}

int main() {
    int data[] = {64, 34, 25, 12, 22, 11, 90}; // data yang akan diurutkan
    int n = sizeof(data) / sizeof(data[0]); // ukuran data

    bubbleSort(data, n); // memanggil fungsi bubbleSort untuk mengurutkan data

    // menampilkan data yang sudah diurutkan
    printf("Data yang sudah diurutkan: ");
    for (int i = 0; i < n; i++)
        printf("%d ", data[i]);

    return 0;
}