#include <stdio.h>
void unesi(char niz[], int velicina){
    char znak=getchar();
    if(znak=='\n') znak=getchar();
    int i=0;
    while (i<velicina-1 && znak!= '\n'){
    niz[i]=znak;
    i++;
    znak=getchar();
}
niz[i]='\0';
}

int prva_rijec(char *s){
    int broj_rijeci=1, brojac=0;
    while(*s!='\0'){
        int razmak=1;
        if(*s==' ' && *(s+1)!=' ' && *(s+1)!='\0')razmak=1;
        else razmak=0;
        if(razmak==1){
            broj_rijeci++;
    }
    s++;brojac++;
}
s=s-brojac;
brojac=0;
while(*s!=' '){
    brojac++;
    if(*s==' '){
    *s='\0';
    s--;
}
s++;
}s=s-brojac;
return broj_rijeci;
}
int main() {
	printf("Tutorijal 9, Zadatak 5");
	return 0;
}
