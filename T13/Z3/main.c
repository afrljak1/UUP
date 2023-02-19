#include <stdio.h>

void unesi(char niz[], int velicina){
    char znak=getchar();
    if(znak=='\n') znak=getchar();
    int i=0;
    while(i<velicina-1 && znak != '\n'){
        niz[i]=znak;
        i++;
        znak=getchar();
    }
    niz[i]='\0';
}

struct Student {
	char prezime[20];
	char ime[15];
	int  broj_bodova;
};

int main() {
    int meni_opcija=1;
    struct Student student;
    struct Student studenti[101];
    int index_stu=0;
    while(meni_opcija!=0){
        printf("Unesite 1 za unos, 2 za ispis, 0 za izlaz: ");
        scanf("%d", &meni_opcija);

    }

    if(meni_opcija==1){
        printf("Unesite ime: ");
        unesi(student.ime,20);
        printf("Unesite prezime: ");
        unesi(student.prezime, 20);
        printf("Unesite broj bodova na I parcijalnom: ");
        scanf("%d", &student.broj_bodova);
        printf("Unesite broj bodova na II parcijalnom:");
        scanf("%d", &student.broj_bodova);
        
    }
	printf("Tutorijal 13, Zadatak 3");
	return 0;
}
