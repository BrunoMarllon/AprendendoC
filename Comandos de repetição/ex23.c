#include <stdio.h>

int main(){
    int x;
    printf("\nescreva um numero: \n");
    scanf("%d", &x);
    printf("\n os multiples de %d sao: ", x);

    for (int i = 1; i<=x; i++)
    {
        if(x%i==0){
            printf("%d ", i);


        }
    }
    


    return 0;
}