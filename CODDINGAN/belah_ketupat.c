#include <stdio.h>

int main () {
  int tinggi, i, j;

  printf("masukkan tinggi belah ketupat: ");
  scanf("%d", &tinggi);
  
  // bagian atas
  for (i =1; i <= tinggi; i++) {
    for (j = i; j< tinggi; j++) {
      printf(" ");
    }
    for (j = 1; j <= ( 2 * i - 1); j++){
      printf("*");
    }
    printf("\n");
  }
  // bagian bawah
   for (i = tinggi - 1; i >= 1; i--) {
        for (j = tinggi; j > i; j--) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}