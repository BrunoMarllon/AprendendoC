#include <stdio.h>
#define MAX 100

int main (){
    int vet[MAX];

    printf("escreva 6 numeros\n");

   for (int i = 0; i < 6; i++)
   {
     scanf("%d", &vet[i]);
   }

    printf("os numeros escritos na ordem inversa: \n ");

   for (int i = 5; i >= 0; i=i-1)
   {
    printf("%d ", vet[i]);
   }
   
   

    return 0;
}