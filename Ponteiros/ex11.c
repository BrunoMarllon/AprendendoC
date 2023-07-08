#include <stdio.h>
#define MAX 100

int Numeros(int*, int*, int*);

int main() {
    int x, y, z, resultado;
    printf("\nEscreva um numero\n");
    scanf("%d", &x);
    printf("\nEscreva um numero\n");
    scanf("%d", &y);
    printf("\nEscreva um numero\n"); 
    scanf("%d", &z);
    resultado = Numeros(&x, &y, &z);
    Numeros(&x, &y, &z);
    printf("\nNumero x: %d\nNumero y: %d\nNumero z %d", x, y, z);
    if (resultado){
        printf("\nOs valores sao iguais\n");
    } else printf("\nOs valores sao diferentes");
    
   
    
    return 0;
}

int Numeros(int* x, int* y, int* z){
    int aux;
    if (*y > *x && *y > *z)
    {
        aux = *x;
        *x = *y;
        *y = aux;

    }
    if (*z > *x && *z > *y)
    {
        aux = *x;
        *x = *z;
        *z = aux;
    }

 if (*y < *x && *y < *z)
    {
        aux = *z;
        *z = *y;
        *y = aux;

    }
    

    if (*x == *y && *x == *z && *z == *y)
    {
        return 1;
    }
    if (*x != *y || *x != *z || *y != *z)
    {
        return 0;
    }
    
    
    


}