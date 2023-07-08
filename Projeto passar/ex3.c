#include <stdio.h>
#include <math.h>

int main(){
    float x;
    printf("escreva um numero positivo\n");
    scanf("%f", &x);
    if(x>0){
        printf("\nA raiz quadrada do seu numero eh %f", sqrt(x));
        printf("\n O quadrado do seu numero eh %f", pow(x,2));
    } else printf("numero invalido");

    return 0;
}
    
