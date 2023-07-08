#include <stdio.h>
#define MAX 100

void Dobro(int*, int*);

int main() {
    int x, y;
    printf("\nEscreva dois numeros\n"); 
    scanf("%d %d", &x, &y);
    Dobro(&x, &y);
    printf("\nO dobro de x: %d\nO dobro de y: %d", x, y);
    return 0;
}

void Dobro(int* x, int* y){
    *x = (*x) + (*x);
    *y = (*y) + (*y);

}