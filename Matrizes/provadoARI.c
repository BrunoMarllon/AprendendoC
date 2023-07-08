#include <stdio.h>
#define MAX 100

int main() {
    int vet[MAX], n, vetpar[MAX], vetimpar[MAX], quantidadedeimpares = 0, quantidadedepares = 0, aux = 0; //Declarando o vetor
    printf("digite a quantidade de elementos do vetor");
    scanf("%d", &n);

    //Recebe os elementos do vetor
    printf("\nDigite os elementos do vetor\n");
    for (int i = 0; i < n; i++)
    {
         scanf("%d", &vet[i]);
    }
    //Imprime o vetor
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vet[i]);
    }
    
    //Separando os valroes impares dos valores pares
    for (int i = 0, j = 0, k = 0; i < n; i++)
    {
        if(vet[i] % 2  == 0){
            vetpar[j] = vet[i];
            j++;
        } else {
            vetimpar[k] = vet [i];
            k++;
        }
        quantidadedepares = j;
        quantidadedeimpares =  k;
    }

    //Muda o local dos numeros pares
    for (int i = 0; i < quantidadedepares; i++)
    {
        vet[i] = vetpar[i];
    }
    for (int i = quantidadedepares, j = 0; i <= n; i++, j++)
    {
        vet[i] = vetimpar[j];
    }
    printf("\n\n");
    //Imprime o vetor com pares em cima e os impares em baixo
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vet[i]);
    }
    //Ordena os numeros pares em ordem decrescente
    for (int j = 0; j < 100; j++)
    {
        for (int i = 0; i < quantidadedepares-1; i++)
        {
            if (vetpar [i]< vetpar[i+1])
            {
                aux = vetpar[i];
                vetpar[i] = vetpar[i+1];
                vetpar[i+1] = aux;
            }
            
        }
    }
    //Ordena os numeros imapares em ordem crescente
    for (int j = 0; j < 100; j++)
    {
        for (int i = 0; i < quantidadedeimpares - 1; i++)
        {
            if (vetimpar[i] > vetimpar[i+1])
            {
                aux = vetimpar[i];
                vetimpar[i] = vetimpar[i+1];
                vetimpar[i+1] = aux;
            }
            
        }
    }

    //Junta os vetores impar e par
    for (int i = 0; i < quantidadedepares; i++)
    {
        vet[i] = vetpar[i];
    }
    for (int i = quantidadedepares + 1, j = 0; i <= n; i++, j++)
    {
        vet[i] = vetimpar[j];
    }
    //Imprime o vetor com os numeros impares e pares ordenados
    printf("\n\n");
   for (int i = 0; i < n; i++)
   {
    printf("%d ", vet[i]);
   }
   
    
    return 0;
}