#include <stdio.h>
#include <string.h>
#define MAX 10

int main(){
    int x ;
    char vet[3];
    printf("\nescreva um numero entre 100 e 900: \n");
    scanf("%s ", &vet);
   
       for (int i = 0; i < sizeof(vet); i++)
       {
        printf("%s\t", vet[i]);
       }
       



    return 0;
}