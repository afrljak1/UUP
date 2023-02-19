#include <stdio.h>

int main() {
    int a, b, i, j;
	printf("Unesite stranice pravougaonika a,b: ");
    scanf("%d, %d", &a, &b);
    for(i=0; i<a; i++){
        if(i==0){
            printf("+");
        
        } else if(i>0 && i<a-1){
            printf("-");
        }else if (i==a-1){
            printf("+");
        }
    }
        if(b>2){
        for(i=1; i<b-1; i++){
            for(j=0; j<a; j++){
                if(j==0){
                    printf("\n|");
                }else if(j>0 && j<a-1){
                    printf(" ");
                }else{
                    printf("|");
                }
            }
        }
    }
        if(b>1){
            for(i=0; i<a; i++){
            if(i==0){
                printf("\n+");
            }else if(i>0 && i<a-1){
                printf("-");
            }else if(i==a-1){
                printf("+");
            }
            
            }
            
        }
        
    
	return 0;
}
    