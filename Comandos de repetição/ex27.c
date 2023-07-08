#include <stdio.h>

int main(){
    float x, Hn=0, n ;
    printf("escreva um numero: \n");
    scanf("%f", &x);
   
    for (float i = 1; i <= x; i++)
    {
        Hn = Hn + 1/i;
        printf("%f", i);
    }
     printf("o numero harmonica de %f eh: %f", x, Hn);




    return 0;
}