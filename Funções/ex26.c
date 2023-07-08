#include <stdio.h>
#define MAX 100

int Somatorio();
int main() {
    int numero, resultado;
    Somatorio();
    
    return 0;
}

int Somatorio(){
    int numero, soma = 0;
        printf("\nDigite um numero positivo\n"); 
        scanf("%d", &numero);
        if(numero >= 0){
            for (int i = 0; i <= numero; i++)
                {
                    soma += i;
                }
        } else {

             for (int i = numero; i <= 1; i++)
                {
                    soma += i;
                }
            }
       printf("\nO somatorio de 1 ate %d: %d", numero, soma);
       
}