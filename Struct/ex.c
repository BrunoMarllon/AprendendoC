#include <stdio.h>
#define MAX 100

struct usuario{
    char nome[100];
    char codigo[100];
    float notas[4];

};

void Le(struct usuario x[4]);
void Media(struct usuario x[4], float* media);
void Imprime(struct usuario x[4]);

int main() {
    float media;
    struct usuario x[4];

    Le(x);
    Media(x, &media);
    Imprime(x);  
    printf("\n\nmedia das notas: %f", media);
    
    return 0;
}

void Le(struct usuario x[4]){

     for (int i = 0; i < 5; i++)
    {
        printf("\nInforme o nome aluno %d: ", i + 1);
        gets(x[i].nome); 
        printf("\nInforme o codigo do aluno %d: ", i + 1);
        gets(x[i].codigo); 
        printf("\nInforme as notas do aluno %d: ", i + 1);
        
            for (int j = 0; j < 5; j++)
            {
                printf("\nNota %d: ", j + 1);
                scanf("%f", &x[i].notas[j]);
                
            }
            getchar();

    }

}

void Media(struct usuario x[4], float* media){
    float soma = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            soma = x[i].notas[j] + soma;
        }
        
        
    }
    *media = soma / 25;
    
}

void Imprime(struct usuario x[4]){

    for (int i = 0; i < 5; i++)
    {
        printf("\n\nAluno %s: ", x[i].nome);
        printf("\nNome: %s", x[i].nome);
        printf("\nCodigo: %s", x[i].codigo);
        
        for (int j = 0; j < 5; j++)
        {
            printf("\n\tNotas: %f", x[i].notas[j]);
        }
        
    }

}