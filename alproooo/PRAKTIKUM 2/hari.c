#include <stdio.h>
#include <stdlib.h>

int main(void){
    int nomer;

    printf("masukkan nomer hari: ");
    scanf("%d", &nomer);

    if (nomer >= 1 && nomer <= 7){
        if (nomer == 1){
            printf("senin");
        }
        else if (nomer == 2){
            printf ("selasa");
        }
        else if (nomer == 3){
            printf ("rabu");
        }
        else if (nomer == 4){
            printf ("kamis");
        }
        else if (nomer == 5){
            printf("jumat");
        }
        else if (nomer == 6){
            printf ("sabtu");
        }
        else{
            printf ("minggu");
        }
    }
    else{
        printf ("bukan nomer hari");
    }
}
