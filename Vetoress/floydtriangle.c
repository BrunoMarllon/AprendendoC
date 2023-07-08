#include <stdio.h>
#define MAX 100

int main() {
    int n;
    printf("escreva o total de linhas do triangulo de floyd\n");
    scanf("%d", &n);
    for (int i = 0, k=1; i <= n; i++)
    {
        for (int j = 0; j < i; j++, k++)
        {
            printf("%d ", k);
            
            
        }
        printf("\n");
    }
    
    return 0;
}