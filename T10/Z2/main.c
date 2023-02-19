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
/*char  *rot13(char *s){
    int d=0;
    while(*s!='\0'){
        if((*s>='A' && *s<='M') || (*s>='a' && *s<='m')){
            *s+=13;
        } else if((*s>'m' && *s<='z') || (*s>'M' && *s<='Z')){
            *s=*s-13;
        }
        s++;
        d++;
    }
   return (s-d);
   // return s;
}
*/

char *rot13(char *s){
    int d=0;
    while(*s!='\0'){
        if((*s>='A' && *s<='M') || (*s>='a' && *s<='m')){
            *s+=13;
        }
        else if((*s>='n' && *s<='z') || (*s>='N' && *s<='Z')){
            *s-=13;
        }
        s++;d++;
    }
    return (s-d);
}
int main() {
	printf("Tutorijal 10, Zadatak 2");
	return 0;
}
