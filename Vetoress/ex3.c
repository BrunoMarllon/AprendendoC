#include <stdio.h>
#define MAX 100

int main(){
    float vet[MAX], vet2[MAX];
    printf("\ndigite 10 valores\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &vet[i]);
        vet2[i]=vet[i]*vet[i];
    }

    printf("\nos valores digitados foram: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%f ", vet[i]);
    }
    printf("\no quadrado de cada um desses valores eh: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%f ", vet2[i]);
    }

    return 0;
}