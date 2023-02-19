#include <stdio.h>

int main() {
    int broj, i;
	printf("Unesite broj n: ");
    scanf("%d", &broj);
    for(i=broj; i>0; i--){//obrnuti ispis
        
            if(i%5==0 || i%7==0 || i%11==0){
                   printf("%i\n", i);
            }
        }
    
	return 0;
}
