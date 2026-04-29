#include <stdio.h>

int main() {
    int tinggi, i, j;

    printf("Jumlah baris bintang : ");
    scanf("%d", &tinggi);

    // Bagian atas
    for (i = 1; i <= tinggi; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Bagian bawah
    for (i = tinggi - 1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}