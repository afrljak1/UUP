#include <stdio.h>

int main() {
    int broj, i, j;
	printf("Unesite broj n: ");
    scanf("%d", &broj);
    for(i=1; i<=broj; i++){
        for(j=1; j<=broj; j++){
            if(i%2==0){
                printf(" * ");
            }
            else 
            printf("*");
            printf("\n");
        }
    }
	return 0;
}
