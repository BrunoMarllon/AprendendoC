#include <stdio.h>

int main(){
    int soma=0, n;
    printf("escreva um numero: ");
    scanf("%d", &n);
    printf("\nos numeros sao: \n");
    for (int i = n; i >=0 ; i--)
    {
       printf("%d ", i); 
    }

    return 0;
}