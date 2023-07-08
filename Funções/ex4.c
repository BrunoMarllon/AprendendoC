#include <stdio.h>
#include <math.h>
#define MAX 100

void perfectsquare(int );

int main() {
    int n;
    printf("\nDigite um numero\n"); 
    scanf("%d", &n);
    perfectsquare(n);
    return 0;
}

void perfectsquare(int x){
    int raiz;
    raiz = sqrt(x);
    
    if ((raiz * raiz) == x)
    {
        printf("\nO numero %d eh um quadrado perfeito\n", x);
    } else{
        printf("\nO numero %d nao eh um quadrado perfeito\n", x);
    }
    

} 