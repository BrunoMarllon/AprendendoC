#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main() {
    int tamanho, *vetor, escolha, position, valor;
    printf("\nInforme quantos bytes serao alocados"); 
    scanf("%d", &tamanho);
    vetor = (int*)calloc(tamanho, sizeof(int));
    for (int i = 0; ; i++)
    {
        printf("\nVetor: ");
        for (int j = 0; j < tamanho; j++)
        {
            printf("%d ", vetor[j]);
        }
        
        printf("\nDigite 1 para adicionar um elemento ");
        printf("\nDigite 2 para verificar um determinada posicao ");
        printf("\nDigite -1 para encerrar o programa ");
        scanf("%d", &escolha);
        if (escolha == 1)
        {
            printf("\nInforme a posicao que deseja colocar o elemento");
            scanf("%d", &position);
            printf("\nInforme o valor que deseja adicionar na posicao %d", position);
            scanf("%d", &valor);
            vetor[position] = valor;
            
        } else if(escolha == 2){
            printf("\nInforme a posicao que deseja verificar ");
            scanf("%d", &position);
            printf("\nElemento na posicao %d: %d\n", position, vetor[position]);
        }else if(escolha == -1){
            break;
        }else printf("\nInforme um numero válido");
        
    }
    free(vetor);
    vetor = NULL;
    return 0;
}