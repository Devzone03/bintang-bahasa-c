#include <stdio.h>

int main() {
    int tinggi, i, j;

    printf("Masukkan angka : ");
    scanf("%d", &tinggi);

    for (i = 1; i <= tinggi; i++) {
        for (j = i; j < tinggi; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}