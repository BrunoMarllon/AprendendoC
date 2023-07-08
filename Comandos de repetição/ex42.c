#include <stdio.h>
#include <math.h>

int main(){
    float x=1, raiz, quadrado, cubo;
    
    
    do{
        printf("\n\nescreva um numero maior que zero: \n");
        scanf("%f", &x);
        quadrado = (x*x);
        cubo = (x*x*x);
        raiz = (sqrt(x));
        printf("o quadrado de %f eh igual a: %f", x, quadrado);
        printf("o cubo de  %f eh igual a: %f", x, cubo);
        printf("a raiz %f eh igual a: %f", x, raiz);

    } while (x>0);
    
        printf("o quadrado de %f eh igual a: %f", x, quadrado);
        printf("o cubo de  %f eh igual a: %f", x, cubo);
        printf("a raiz %f eh igual a: %f", x , raiz);



    return 0;
}