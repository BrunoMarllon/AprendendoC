#include <stdio.h>

int main (){
    int x, y;
    do{
        printf("\ndigite um intervalo de numeros: \n");
    scanf("%d %d", &x, &y);

    if (x>y)
    {
        printf("Digite um numero valido");
    }
    } while (x>y);
    printf("\n os numeros impares dentro deste inter valo sao: \n");
    for (int i = x; i <= y; i++)
    {
        if (i%3==0)
        {
            printf("%d ", i);
        }
        
    }
    
   




    return 0;
}