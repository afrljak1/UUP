/*
#include <stdio.h>

int main() {
  int broj, cifra, cifra1, cifra2, novi_broj, n1 = 0, n2 = 0;
  do {
    printf("Unesite broj: ");
    scanf("%d", &broj);
  } while (broj < 0);

  do {
    printf("Unesite cifru: ");
    scanf("%d", &cifra);
  } while (cifra < 0);

  do {
    cifra1 = broj % 10;
    broj = broj / 10;
    if (cifra1 != cifra) {
      novi_broj = novi_broj * 10 + cifra1;
    } else {
      novi_broj = novi_broj;
    }
    while (broj != 0)
      ;

    do {
      cifra2 = novi_broj % 10;
      novi_broj = novi_broj / 10;
      n1 = n1 * 10 + cifra2;

    } while (novi_broj != 0);

    printf("Nakon izbacivanja broj glasi %d.\n", n1);
    n2 = n1 * 2;
    printf("Broj pomnozen sa dva glasi %d.", n2);
    return 0;
  }
*/