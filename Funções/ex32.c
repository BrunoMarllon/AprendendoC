#include <stdio.h>
#define MAX 100

int Simplifica(int, int);

int main() {
    int numerador, denominador, resultado;
   
    printf("\nInforme o numerador\n"); 
    scanf("%d", &numerador);

    printf("\nInforme o denominador\n");
    scanf("%d", &denominador);
    
     resultado = Simplifica(numerador, denominador);
     
    printf("\n O maior divisor de %d e %d: %d\n", numerador, denominador, resultado);
    printf("\nFracao simplificada: %d/%d\n", numerador/resultado, denominador/resultado);

    return 0;
}









int Simplifica(int numerador, int denominador){
    int modulodonumerador, modulododenominador, maiordivisor;
    //Cria o modulo do numerador
    if (numerador<0)
    {
        modulodonumerador = numerador * - 1;
    }else
    {
        modulodonumerador = numerador;
    }
    //Cria o modulo do denominador
    if (numerador<0)
    {
        modulododenominador = denominador * - 1;
    }else
    {
        modulododenominador = denominador;
    }

    for (int i = modulodonumerador + modulododenominador; i > 0; i--)
    {

        if (numerador % i == 0 && denominador % i == 0)
        {
    
            
            maiordivisor = i;
            break;
        }
    }
    
    return maiordivisor;
}
