#include <stdio.h>

int main(){
    int x;
    printf("escreva um numero: ");
    scanf("%d", &x);
    printf("\nos primeiros numeros impares de %d são: \n", x);
    for (int i = 0; i < x; i++)
    {
        if(i%2!=0){
            printf("%d ", i);
        } 
    }
    


    return 0;
}