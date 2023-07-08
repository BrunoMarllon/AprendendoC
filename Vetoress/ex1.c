#include <stdio.h>
#define MAX 100
int main(){
    int vet[MAX]={1, 0, 5, -2, -5, 7}, soma=0;
    vet[4]= 100;
    for (int i = 0; i < 6; i++)
    {
        printf("\t\n %d ", vet[i]);
    }
    
      soma = vet[0] + vet[1] + vet[5];
      

      printf("a soma das posições [0], [1] e [5] eh %d", soma);





    return 0;
}