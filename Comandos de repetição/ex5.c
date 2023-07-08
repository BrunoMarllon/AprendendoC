#include <stdio.h>
int main(){
    int x, soma;
    printf("\n digite 10 numeros:\n");
    for (int i = 0; i < 10; i++)
    {
       scanf("%d, ", &x);
       soma = x + soma;
    }
    printf("a soma eh igual: %d", soma);


    return 0;
}