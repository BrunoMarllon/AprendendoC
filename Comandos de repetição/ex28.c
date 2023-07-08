#include <stdio.h>

int main(){

    float E=0, n, fat;
    printf("digite um numero: ");
    scanf("%f", &n);

    for (fat =1; 1 < n; n=n-1)
    {
        fat = fat * n;
    }
    printf("o fatorial eh: %f", fat);

    for (int i = 1; i <= n; i++)
    {
        E = E + 1/i;
    }
    


    return 0;
}