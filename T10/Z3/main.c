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

char* izbaci_rijec(char *s, int n){
    char *pocetak=s;
    int brojPron=0;
    char *p;

    while(*s== ' ') s++;
    while(*s!='\0'){
        if((s==pocetak) || (*(s-1)==' ' && *s>='a' && *s) || *(s+1)=='\0'){
            brojPron++;
        if(brojPron==n) p=s;
        if(brojPron==n+1){
while((*p++=*s++));
return pocetak;
        }
        }
        s++;
    }
  return pocetak;
}
int main() {
	
	return 0;
}
