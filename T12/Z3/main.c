#include <stdio.h>
int main() {
	
	FILE *ulaz;
	int predmetId,prolaznost=0;
	double prosjecnaOcjena=0;
	int brojacOcjena=0,brojacIndeksa=0;
	int index,predmet,ocjena,validanPredmet=0;

		
	printf("Unesite predmet: "); 
	scanf("%d",&predmetId);
	
	ulaz = fopen("ispiti.txt","r");
 
	if(ulaz==NULL) {
		printf("Pogresan ulaz");
		return 1;
	}
	
	while (fscanf(ulaz,"%d %d %d",&index,&predmet,&ocjena) == 3) {
		
		if(predmet == predmetId) {
			prosjecnaOcjena+=ocjena;
			brojacOcjena++;
			
			if(ocjena >= 6) 
				prolaznost++;
				validanPredmet=1;
		}
		brojacIndeksa++;
		}
	fclose(ulaz);
	
	if(validanPredmet) {
		printf("Prosjecna ocjena: ");
		printf("%.2f\n",prosjecnaOcjena/brojacOcjena);
		printf("Prolaznost: ");
		printf("%g%%",((double)prolaznost/(double)brojacOcjena)*100.);
	} else { 
		printf("Zalimo, ali ne postoje podaci o predmetu sa brojem %d!",predmetId);
	}
	return 0;
}