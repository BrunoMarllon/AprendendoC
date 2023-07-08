#include <stdio.h>
#define MAX 100

float NumeroExpoente(float , float );

int main() {
    float numero, expoente, resultado;
    printf("\nEscreva um numero e seu expoente\n"); 
    printf("\nEscreva o numero\n");
    scanf("%f", &numero);
    printf("\nEscreva o expoente\n");
    scanf("%f", &expoente);
    resultado = NumeroExpoente(numero, expoente);
    printf("\nO numero %f elevado a %f:  %f", numero, expoente, resultado);

    return 0;
}

float NumeroExpoente(float x, float y){

    float resultado = x;

    if (y == 1)
    {
        return x;
    }
    if (y == 0)
    {
        return 1;
    }
    if (y > 1)
    {
        for (int i = 1; i < y; i++)
        {
            resultado = resultado * x; 
        }
    return resultado;
    }
    if (y < 0)
    {
        y = y *(-1);
        for (int i = 1; i < y; i++)
        {
            resultado = resultado * x; 
        }
    return 1/resultado;
        
    }
    


}