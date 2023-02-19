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
char* kapitaliziraj(char *s){
char *p=s;
while(*s!='\0'){
    if(*s>='a' && *s<='z' && (*(s-1)==' ')){
        *s=*s-('a'-'A');
    }
    s++;
}
return p;
}
int main() {
char string[100];
	
	printf("Unesite neki tekst: ");
	unesi(string,40);
	
	kapitaliziraj(string);

	printf("%s",string);
	return 0;
}
