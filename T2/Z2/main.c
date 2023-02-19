
#include <stdio.h>

#define NSP1 90.0
#define NSP2 120.0
#define DP1  60.0
#define DP2  80.0
#define PULS1 55.0
#define PULS2 100.0


int main() {
    float SP, DP, PULS;
    printf("Dobrodosli kod Vaseg kucnog ljekara!\n");
	printf("Unesite sistolicki, dijastolicki pritisak i puls: ");
    scanf("%f %f %f", &SP, &DP, &PULS);
    if(SP>=NSP1 && SP<=NSP2){
       printf("SP: normalan\n");
    }  else
    printf("SP: nije normalan\n");

 if(DP>=DP1 && DP<=DP2){
         printf("DP: normalan\n");
     }else {
     printf("DP: nije normalan\n");
     }
    if(PULS>=PULS1 && PULS<=PULS2){
    printf("Puls: normalan\n");
     }else
     printf("Puls: nije normalan\n");
    

return 0;
     }