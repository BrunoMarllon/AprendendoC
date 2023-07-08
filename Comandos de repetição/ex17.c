#include <stdio.h>

int main(){
    int x, soma=0;

    printf("\nEscreva um numero natural positivo\n");
    scanf("%d", &x);

    for (int i = 0; i <= x; i++)
    {
        soma= soma +i;
    }
    
    printf("a soma dos %d primeiros numeros é: %d", x, soma);




    return 0;
}