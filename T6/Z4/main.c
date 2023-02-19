#include <stdio.h>
#define DUZINA 10

int main() {
    int niz[DUZINA];
    int i, broj, j;
    int a=DUZINA;
	printf("Unesite elemente niza: ");
    for(i=0; i<DUZINA; i++){
        scanf("%i", &niz[i]);
        if(niz[i]==-1){
            a=i;
            break;
        }
    }
    printf("Unesite element koji treba izbaciti: ");
    scanf("%i", &broj);
    int brojac=0;
  
    for(i=0; i<a; i++){
        for(j=1; j<a; j++){
            if(niz[0]==niz[j]){
                brojac++;
            }
        }
        if(niz[i]==broj && i!=a){
            if(brojac==a-1){
                a=0;
                break;
            }
            for(j=i; j<a-1; j++){
                niz[j]=niz[j+1];
            }
            a--;
        }
    }
    printf("Novi niz glasi: ");
    for(i=0; i<a; i++){
        if(i!=a-1){
            printf("%i,", niz[i]);
        }else {
        printf("%i", niz[i]);
        }
    }
	return 0;
}
