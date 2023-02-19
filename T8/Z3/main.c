#include <stdio.h>
/*float maxtemp(float p[], int br){
    float max=0;
    int i;
    for(i=0; i<br; i++){
        if(p[i]>max){
            max=p[i];
        }
    }
    return max;
}
float prtemp(float p[], int br){
    float prtemp=0;
    int i;
    for(i=0; i<br; i++){
        prtemp+=p[i];
    }
    prtemp/=br;
    return prtemp;
}
int main() {
	printf("Tutorijal 8, Zadatak 3");
	return 0;
}
*/

float maxtemp(float p[], int br){
    float max=0;
    int i;
    for(i=0; i<br; i++){
        if(p[i]>max)
        max=p[i];
    }
    return max;
}
float prtemp(float p[], int br){
    float prtemp=0;
    int i;
    for(i=0; i<br; i++){
        prtemp+=p[i];
    }
    prtemp/=br;
    return prtemp;
}
int main(){
    int n;
    
    return 0;
}