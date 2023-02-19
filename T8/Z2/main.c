#include <stdio.h>

float maxtemp(float p[8]){
    float max=p[0];
    int i;
    for(i=0; i<8; i++){
        if(p[i]>max)
        max=p[i];
    }
    return max;
}
float minntemp(float p[8]){
    float min=p[0];
    int i;
    for(i=0; i<8; i++){
        if(p[i]>min)
        min=p[i];
    }
    return min;
}

float prtemp(float p[8]){
    float prtemp=0;
    int i;
    for(int i=0; i<8; i++){
        prtemp+=p[i];
       // prtemp/=8;
    }
    prtemp/=8;
    return prtemp;
}
/*float maxtemp(float p[8]){
    float max=p[0];
    int i;
    for(i=0; i<8; i++){
        if(p[i]>max){
            max=p[i];
        }
    }
    return max;
}
float prtemp(float p[8]){
    float prtemp=0;
    int i;
    for(i=0; i<8; i++){
        prtemp+=p[i];
    }
    prtemp=prtemp/8;
    return prtemp;
}

int main() {
    int i;
    float niz[8];
	printf("Unesite temperature: ");
    for(i=0; i<8; i++){
        scanf("%f", &niz[i]);
    }
    printf("Maksimalna temperatura: %.1f\n", maxtemp(niz));
    printf("Prosjecna temperatura: %.1f", prtemp(niz));
	return 0;
}
*/

int main(){
    float niz[8];
    printf("Unesite temperature: ");
    int i;
    for(i=0; i<8; i++){
        scanf("%f", &niz[i]);
    }
    printf("Maksimalna temperatura: %.1f\n", maxtemp(niz));
    printf("Prosjecna temperatura: %.1f",prtemp(niz));
    return 0;
}