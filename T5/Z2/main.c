#include <stdio.h>
#define BROJ_EL 10

int main() {
    int niz[BROJ_EL], suma, i, broj_parnih, suma_parnih, max, min;
    float prosjek;
    for(i=0; i<BROJ_EL; i++){
        printf("Unesite %d. cijeli broj: ", i+1);
        scanf("%d", &niz[i]);
    suma=0;
        suma+=niz[i];
        if(niz[i]%2==0){
            suma_parnih+=niz[i];
            broj_parnih++;
        }
        prosjek=(float)suma/BROJ_EL;
    }
    printf("Srednja vrijednost unesenih brojeva je %.2f.", prosjek);
    max=niz[0];
    min=niz[0];
    for(int i=1; i<BROJ_EL; i++){
    if(niz[i]>max)max=niz[i];
    if(niz[i]<min)min=niz[i];
    }
  return 0;
}

/*
int main() {
int niz[BROJ_EL], suma=0, i, broj_parnih=0, suma_parnih=0, max=0, min=0;
float prosjek, prosjek_parnih;
for(i=0; i<BROJ_EL; i++){
    printf("Unesite %d. cijeli broj: ", i+1);
    scanf("%d", &niz[i]);

        suma=suma+niz[i];
        if(niz[i]%2==0){
            suma_parnih+=niz[i];
            broj_parnih++;
        }
}

        prosjek=(float) suma/BROJ_EL;
        printf("Srednja vrijednost unesenih brojeva je %.2f.\n", prosjek);
    
if(broj_parnih==0){
    printf("Srednja vrijednost parnih brojeva je 0.00.\n");
}else{
    prosjek_parnih=(float)suma_parnih/broj_parnih;
    printf("Srednja vrijednost parnih brojeva je %.2f.\n", prosjek_parnih);
}

 max=niz[0];
 min=niz[0];
for(i=1; i<BROJ_EL; i++){
    if(niz[i]>max){
        max=niz[i];
    }
    if(niz[i]<min){
        min=niz[i];
    }
}
printf("Najveci element je %d a najmanji %d.\n", max, min);
	return 0;
}

*/