#include <stdio.h>
#define MAX 100

void Troca(int* , int* );

int main() {
    int x, y;
    printf("\nEscreva dois numeros\n"); 
    scanf("%d %d", &x, &y);
    Troca(&x, &y);

    printf("\nResultado: %d > %d\n", x, y);
    return 0;
}

void Troca(int* x, int* y){
    int z = *y;
    if (*x<*y)
    {
        *y = *x;
        *x = z;
    }
    

}