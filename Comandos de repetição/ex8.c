#include <stdio.h>
#define MAX 10

int main(){
    int x=0, y=0, maior, menor;

    printf("escreva 10 numeros: \n");
    scanf("%d", &y);
    maior = y;
    menor = y;
    
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &x);
        if (x>maior)
        {
           maior=x;
        }
        if(x<menor){
            menor=x;
        }
        
       
             
    }
    printf("\no maior numero eh: %d ", maior);
    printf("\no menornumero eh: %d ", menor);

    return 0;
}