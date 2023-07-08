#include <stdio.h>
#define MAX 100
struct alunos{

    char matricula[MAX];
    char nome[MAX];
    float notas[MAX];

};

void Le(struct alunos x[4]);
void Imprime(struct alunos x[4]);
void Maiornota(struct alunos x[4], float* maior);
void Maiormedia(struct alunos x[4], float* media);
void Menormedia(struct alunos x[4], float* media);
int main() {
    float maior, media;
    struct alunos x[4];
    Le(x);
    Imprime(x);
    Maiornota(x, &maior);
    Maiormedia(x, &media);
    Menormedia(x, &media);
    return 0;
}

void Maiormedia(struct alunos x[4], float* media){
    
    *media = 0;
    float soma = 0;
    int aluno;
    for (int i = 0; i < 5; i++)
    {
        soma = 0;
        for (int j = 0; j < 3; j++)
        {
            soma = x[i].notas[j] + soma;
        }
        if (soma/3 > *media)
        {
            aluno = i;
            *media = soma /3;
        }
        
    }
    
    printf("\nO aluno %s possui a maior media: %f", x[aluno].nome, *media);

}

void Menormedia(struct alunos x[4], float* media){
    
    *media = 11;
    float soma = 0;
    int aluno;
    for (int i = 0; i < 5; i++)
    {
        soma = 0;
        for (int j = 0; j < 3; j++)
        {
            soma = x[i].notas[j] + soma;
        }
        if (soma/3 <*media)
        {
            aluno = i;
            *media = soma /3;
        }
        
    }
    
    printf("\nO aluno %s possui a menor media: %f", x[aluno].nome, *media);

}

void Maiornota(struct alunos x[4], float* maior){
    *maior = 0;
    int aluno;
    for (int i = 0; i < 5; i++)
    {
       
            if (*maior < x[i].notas[0])
            {
                *maior = x[i].notas[0];
                aluno = i;
            }
            
        
                
    }
    printf("\nO aluno %s possui a maior nota na primeira prova: %f", x[aluno].nome, *maior);
    

}

void Le(struct alunos x[4]){
   
    for (int i = 0; i < 5; i++)
    {
        printf("\nInforme o nome do aluno %d: ", i+1);
        gets(x[i].nome);
        printf("\nInforme a matricula do aluno %d: ", i+1);
        gets(x[i].matricula);
        for (int j = 0; j < 3; j++)
        {
            printf("\nInforme a nota %d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &x[i].notas[j]);
        }
        getchar();

    }
}

void Imprime(struct alunos x[4]){
   int soma; 
    for (int i = 0; i < 5; i++)
    {
        soma = 0;
        printf("\n\t\tAluno %s: \n", x[i].nome);
        printf("\nMatricula: %s", x[i].matricula);
        printf("\nNotas: ");
        for (int j = 0; j < 3; j++)
        {
            printf("\n%f", x[i].notas[j]);
            soma = soma + x[i].notas[j];
        }
        if (soma/3 >= 7)
        {
            printf("\nAprovado(a)");
        } else {
            printf("\nReprovado(a)");
        }
        

    }
    
}