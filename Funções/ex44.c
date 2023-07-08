#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

int ImparEPar(int [], int [], int [], int , int, int ); //Protótipo da função

int main() {
    int vet[MAX], tamanho = 30, vetpar[MAX], vetimpar[MAX], tamanhodovetorimpar, tamanhodovetorpar;
    srand (time (NULL)); //Declarando a seed
    //Criando um vetor aleatorio
    for (int i = 0; i < tamanho; i++)
    {
        vet[i] = rand () % 10 + 1;
    }

    ImparEPar(vet, vetpar, vetimpar, tamanho, tamanhodovetorpar, tamanhodovetorimpar); //Chamando a função
    //Imprimindo os elementos gerados
    printf("\nOs elementos do vetor: \n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vet[i]);
    }
    //Imprimindo os elementos pares do vetor
    printf("\nOs elementos pares do vetor: \n");
    for (int i = 0; i < tamanhodovetorpar; i++)
    {
        printf("%d ", vetpar[i]);
    }
    //Imprimindo os elementos impares do vetor
    printf("\nOs elementos impares do vetor: \n");
    for (int i = 0; i < tamanhodovetorimpar; i++)
    {
        printf("%d ", vetimpar[i]);
    }

    return 0;
}

int ImparEPar(int vet[], int vetpar[MAX], int vetimpar[MAX], int tamanho, int tamanhodovetorpar, int tamanhodovetorimpar){

    for (int i = 0, j = 0, k = 0; i < tamanho; i++)
    {
        if (vet [i] % 2 == 0)
        {
            vetpar[j] = vet[i];
            j++;
        }
        if (vet[i] % 2 != 0)
        {
            vetimpar[k] = vet[i];
            k++;
        }
        tamanhodovetorpar = j;
        tamanhodovetorimpar = k;
    }
    


}