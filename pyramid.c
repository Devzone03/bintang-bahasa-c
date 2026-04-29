#include <stdio.h>

int main () {
  int tinggi, i, j;

  printf("---PYRAMID---\n");
  printf("Tinggi : ");
  scanf("%d", &tinggi);

  for (i = 1; i<= tinggi; i++) {
    for (j = i; j < tinggi; j++) {
      printf(" ");
    }
    // cetak bintang
    for (j = 1; j <= ( 2 * i - 1 ); j++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}