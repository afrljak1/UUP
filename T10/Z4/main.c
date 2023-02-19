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
char* whitespace(char* s){
    int i,j;
    char* p=s;
    char *q=s;
    while(*p==' ' || *p=='\t' || *p=='\n') p++;
    while(*p!='\0') *s++=*p++;
    *s='\0';
    if(s!=q){
        s--;
        while(*s==' ')s--;
        s++;
        *s='\0';
    }
    s=q;
    p=q;
    return p;
}

int main() {
	printf("Tutorijal 10, Zadatak 4");
	return 0;
}
