#include <stdio.h>
#define MAX 100

void Frac(float num, int* inteiro, float* frac);

int main() {
    float num, frac;
    int inteiro;
    printf("\nEscreva um numero");
    scanf("%f", &num);
    Frac(num, &inteiro, &frac);

    printf("\nNumero escrito :%f", num);
    printf("\nNumero inteiro :%d", inteiro);
    printf("\nParte fracionaria:%f", frac);

    return 0;
}

void Frac(float num, int* inteiro, float* frac){
    *inteiro = num;
    *frac = num - *inteiro;
}