#include <stdio.h>
long int faktorijel(int n){
    int i; 
    long int fakt=1;
    for(i=2; i<=n; i++){
    fakt*=i;
    }
    return fakt;
}
int main() {
    int n, i;
    float suma=0, x;
	printf("Unesite broj n u intervalu [1, 12]:");
    scanf("%d", &n);
    printf(" Unesite realan broj x:");
    scanf("%f", &x);
    for(i=2; i<=n; i++){
        int fakt=faktorijel(i);
    suma+=x/(fakt);
    }
    printf(" Suma od 1 do %i za x = %.3f je %.3f", n,x, suma);
	return 0;
}
