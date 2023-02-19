#include <stdio.h>
#include <stdlib.h>


struct Vrijeme{
    int sati, minute, sekunde;
};

struct Vrijeme unos_vremena(){
    struct Vrijeme t;
    scanf("%d %d %d", &t.sati, &t.minute, &t.sekunde);
    return t;
}
int proteklo(struct Vrijeme v1, struct Vrijeme v2){
    struct Vrijeme v;
    int sek;
    v.sati=v1.sati-v2.sati;
    v.minute=v1.minute-v2.minute;
    v.sekunde=v1.sekunde-v2.sekunde;
    sek=v.sati*3600+v.minute*60+v.sekunde;
    return abs(sek);
}

int main(){
    struct Vrijeme v, t;
    printf("Unesite prvo vrijeme (h m s): \n");
    v=unos_vremena();
    printf("Unesite drugo vrijeme (h m s): \n");
    t=unos_vremena();
    printf("Izmedju dva vremena je proteklo %d sekundi.\n", proteklo(v, t));


    return 0;
}
/*struct Vrijeme {
		int sati;
		int minute;
		int sekunde;
	};

struct Vrijeme unos_vremena(){
    struct Vrijeme t;
    scanf("%d %d %d", &t.sati, &t.minute, &t.sekunde);
    return t;
}

int proteklo(struct Vrijeme v1, struct Vrijeme v2){
    struct Vrijeme t;
    int s;
    t.sekunde=v1.sekunde-v2.sekunde;
    t.minute=v1.minute-v2.minute;
    t.sati=v1.sati-v2.sati;
    s=t.sekunde+t.minute*60+ t.sati*3600;
    return s; 
}
int main() {
    struct Vrijeme v1, v2;
	printf("\nUnesite prvo vrijeme (h m s): ");
    v1=unos_vremena();
    printf("\nUnesite drugo vrijeme (h m s): ");
    v2=unos_vremena();
    printf("Izmedju dva vremena je proteklo %d sekundi.", proteklo(v1, v2));
	return 0;
}
*/