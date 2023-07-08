#include <stdio.h>
#define MAX 100

int main() {
    int doisprimeirosdigitos, doisultimosdigitos, soma;
    printf(""); 
    for (int i = 1000; i <= 9999; i++)
    {
        soma = 0;
        doisprimeirosdigitos = i / 100; 
        doisultimosdigitos = i / 100;
        doisultimosdigitos = i - (doisultimosdigitos * 100) ;
        soma = soma +doisprimeirosdigitos + doisultimosdigitos;
        if ((soma * soma) == i)
        {
            printf("\nO numero %d possui essa propriedade\n", i);
        }
        
        /*printf("\nValor do numero: %d", i);
        printf("\nDois primeiros digitos: %d", doisprimeirosdigitos);
        printf("\nDois ultimos digitos: %d", doisultimosdigitos);*/
    }
    
    return 0;
}