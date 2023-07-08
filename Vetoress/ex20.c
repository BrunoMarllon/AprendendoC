#include <stdio.h>
#define MAX 100

int main() {
    int n, vet[MAX], tamanho=10, count=0, vetimpar[MAX], pulalinha=0;
   
   printf("digite 10 numeros no intervalo [0,50]");

  for (int i = 0; i < tamanho; i++)
  {
    scanf("%d", &vet[i]);
    if (vet[i]<0 || vet[i]>50)
    {
        printf("por favor, imprima um valor dentro do intervalo [0,50]");
        i--;
    }
  }
   for (int i = 0, j=0; i < 10; i++)
        if(vet[i]%2!=0)
      {
      vetimpar[j] = vet[i];
       count++;
       j++;
      }
   {
    
    }
   printf("\nos elementos pares digitados \n");
   for (int i = 0; i < count; i++)
   {    
    printf("%d ", vetimpar[i]);
    pulalinha++;
    if (pulalinha==2)
    {
        printf("\n");
        pulalinha=0;
    }
    }
    pulalinha=0;
    printf("\n os elemntos do vetor \n");
   for (int i = 0; i < tamanho; i++)
   {
    printf("%d ", vet[i]);
    pulalinha++;
    if (pulalinha==2)
    {
        printf("\n");
        pulalinha=0;
    }
   } 
    return 0;
}