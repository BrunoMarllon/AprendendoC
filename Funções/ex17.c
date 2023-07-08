#include <stdio.h>
#define MAX 100

int sum(int, int);

int main() {
    int x, y, resultado;
    printf("\nDigite dois numeros\n"); 
    scanf("%d %d", &x, &y);
    resultado = sum(x, y);
    printf("\nA soma entre os dois numeros: %d", resultado);
    return 0;
}

int sum(int x, int y){

    int sum = 0;
    if (x < y)
    {
        for (int i = x + 1; i < y; i++)
        {
            sum += i;
        }
    }
    if (x > y)
    {
        for (int i = y + 1; i < x; i++)
        {
            sum += i;
        }
    }
    return sum;
}