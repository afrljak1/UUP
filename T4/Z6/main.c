#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int broj;
    //srand(time(NULL));
    int random_number=rand();

	printf("Izabrao sam broj. Probaj ga pogoditi (-1 za izlaz).\n");
    for(;;){
     printf("Unesite broj: ");
     scanf("%d", &broj);
    
    if(broj==random_number){
        printf("JEDNAK\n");
        printf("Kraj igre.\n");
    }
    else if(broj==(-1)){
        printf("Kraj igre.");
    }
    else if(broj>random_number){
        printf("MANJI");
    }
   else if(broj<random_number){
       printf("VECI");
   }
    
	return 0;
}
}