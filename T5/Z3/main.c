#include <stdio.h>
#define velicinaNiza 5
int main() {
  int i;
  double nizA[velicinaNiza], nizB[velicinaNiza], nizC[velicinaNiza];
  printf("Unesite clanove niza A: ");
  for (i = 0; i < velicinaNiza; i++) {
    scanf("%lf", &nizA[i]);
  }
  printf("Unesite clanove niza B: ");
  for (i = 0; i < velicinaNiza; i++) {
    scanf("%lf", &nizB[i]);
  }
  for (i = 0; i < velicinaNiza; i++) {
    nizC[i] = nizA[i] * 2 + nizB[i];
  }
  printf("\nNiz A glasi: ");
  for (i = 0; i < 5; i++)
    if (i != 4)
      printf("%.2lf, ", nizA[i]);
    else
      printf("%.2lf", nizA[i]);

  printf("\nNiz B glasi: ");
  for (i = 0; i < 5; i++)
    if (i != 4)
      printf("%.2lf, ", nizB[i]);
    else {
      printf("%.2lf", nizB[i]);

      printf("\nNiz C glasi: ");
      for (i = 0; i < 5; i++)
        if (i != 4)
          printf("%.2lf, ", nizC[i]);
        else
          printf("%.2lf", nizC[i]);
    }
  return 0;
}
