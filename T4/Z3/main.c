#include <stdio.h>

int main() {
    int i, j;
	printf("  X |");
    for(i=1; i<=10; i++){
        printf("%4d", i);
    }
    printf("\n----+----------------------------------------");
	for(i=1; i<=10; i++){
        printf("\n%3d |", i);
    
    for(j=1; j<=10; j++){
        printf("%4d", j*i);
    }
    }
	return 0;
}

