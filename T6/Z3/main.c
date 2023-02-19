#include <stdio.h>
#define DUZINA 10

int main() {
    int nizA[DUZINA], nizB[DUZINA], nizC[DUZINA*2];
    int velA=DUZINA, velB=DUZINA;
    int i=0;
	printf("Unesite elemente niza A: ");
    for(i=0; i<DUZINA; i++){
        scanf("%i", &nizA[i]);
        if(nizA[i]==-1){
            velA=i;
            break;
        }
    }
    printf("Unesite elemente niza B: ");
    for(i=0; i<DUZINA; i++){
        scanf("%i", &nizB[i]);
        if(nizB[i]==-1){
            velB=i;
            break;
        }
    }
    
    for(i=0; i<velA+velB; i++){
        if(i<velA){
            nizC[i]=nizA[i];
        }else{
            nizC[i]=nizB[i-velA];
        }
    }
    
    printf("Niz C glasi: ");
    for(i=0; i<velA+velB; i++){
       if(i!=velA+velB-1){
           printf("%i,", nizC[i]);
       }else
        printf("%i", nizC[i]);
    }

	return 0;
}
