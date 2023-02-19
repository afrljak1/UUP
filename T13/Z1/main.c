#include <stdio.h>
#include <stdlib.h> /* Zbog funkcije exit() */

struct Student {
	char prezime[20];
	char ime[15];
	int  broj_bodova;
};

int main() {
	struct Student studenti[300], tmp;
	FILE *ulaz, *izlaz;
	int i, j, vel, max;

	/* Otvaranje datoteka */
	if ((ulaz = fopen("ispit.txt","r")) == NULL) {
		printf("Greska pri otvaranju datoteke ispit.txt");
		return 1;
	}

	if ((izlaz = fopen("ispit_sortiran.txt","w")) == NULL) {
		fclose(ulaz);
		printf("Greska pri otvaranju datoteke ispit_sortiran.txt");
		return 1;
	}

	/* Ucitavanje datoteke u niz studenti */
	i=0;
     while (fscanf(ulaz,"%20s%15s%2d\n", studenti[i].prezime, studenti[i].ime, &studenti[i].broj_bodova) == 3 && i<300)
		i++;
	vel = i;

	/* Sortiranje niza po broju bodova */
	for (i=0; i<vel; i++) {
		max = i;
		for (j=i+1; j<vel; j++)
			if (studenti[j].broj_bodova > studenti[j].broj_bodova) 
				max = j;

		tmp = studenti[i];
		studenti[i] = studenti[max];
		studenti[max] = tmp;
	}

	// Upis niza u datoteku
	for (i=0; i<vel; i++)
		fprintf(izlaz,"%-20s%-15s%2d\n", studenti[i].prezime, studenti[i].ime, studenti[i].broj_bodova);

	printf ("Izlazna datoteka ispit_sortiran.txt je kreirana\n");
	fclose(ulaz);
	fclose(izlaz);
	return 0;
}
