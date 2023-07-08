#include <stdio.h>

int main(){
    int x, y, soma=0, mult=1;

    printf("escreva dois numeros: \n");

    scanf("%d", &x);
    scanf("%d", &y);

    if(x>y){for (int i = (x); i >= y; i--)
    {
        if(i%2==0){
            soma = soma + i;
        } else if(i%2!=0){
            mult = mult * i;
        }
         printf("%d ", i);
    }
       
        printf("\na soma dos numeros do intervalo eh%d\n", soma );
        printf("\na multiplicação dos numeros do intervalo eh%d\n", mult);
    }else if (x<y){
        for (int i = y; i >= x; i--){

        if(i%2==0){
            soma = soma + i;
        } else if(i%2!=0){
            mult = mult * i;
        }
      
    }
        printf("\na soma dos numeros do intervalo eh%d\n", soma );
        printf("\na multiplicação dos numeros do intervalo eh%d\n", mult);

    }



    return 0;
}