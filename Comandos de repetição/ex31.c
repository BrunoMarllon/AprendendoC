#include <stdio.h>

int main(){
    float S=0, i=1, j=1, count=0;

    while (i<=99){
        S=S + (i/j);
        
        printf(" i = %f ", i);
        printf(" j = %f ", j);
        printf(" S = %f ", S);
        printf("\n");
        i=i+2;
        j++;
        count++;
        printf("count %f", count);
    }

    printf("\n\no resultado da progressão eh: %f", S);



    return 0;
}