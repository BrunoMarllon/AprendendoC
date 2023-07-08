#include <stdio.h>
#include <math.h>

int main(){
    int x;
    printf("escreva um numero\n");
    scanf("%d", &x);
    if(x%2!=0){
        printf("o numero eh impar\n");
    } else if(x%2==0){
        printf("o numero eh par\n");
    }

    return 0;
}