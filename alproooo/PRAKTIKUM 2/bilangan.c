#include <stdio.h>
#include <stdlib.h>

int main(void){
    int bilangan;

    printf("masukkan nilai bilangan: ");
    scanf("%d", &bilangan);

    if (bilangan > 0){
        printf("bilangan bulat positif");
    }
    else if (bilangan == 0){
        printf("nol");
    }
    else if (bilangan < 0){
        printf("bilangan bulat negatif");
    }
    else{
        printf("tidak termasuk bilangan bulat");
    }
    return 0;
}
