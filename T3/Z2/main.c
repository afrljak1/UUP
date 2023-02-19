#include <stdio.h>

int main() {
    int broj, suma=0;
    for(suma=0; suma<=100; suma+=broj){
        printf("Unesite broj: ");
        scanf("%d", &broj);
    }
    printf("Suma je: %d", suma);
	return 0;
}
