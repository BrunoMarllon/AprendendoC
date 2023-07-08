#include <stdio.h>
#include <string.h>
#define MAX 100
/*12 - Faça uma função que receba como entrada três strings (A, B e C) e retorne uma
quarta string formada pela substituição de todas as ocorrências da string B pela string C
dentro da string A. Ex.: Se A='Abra a porta para entrar para poder descansar
calmamente', B='para' e C='e tente', a resposta deve ser: 'Abra a porta e tente entrar e
tente descansar calmamente'.*/

void Substitui(char A[MAX], char B[MAX], char C[MAX], char D[MAX]);

int main() {
    char A[MAX], B[MAX], C[MAX], D[MAX];

    gets(A);
    gets(B);
    gets(C);
    Substitui(A, B, C, D);

    return 0;
}

void Substitui(char A[MAX], char B[MAX], char C[MAX], char D[MAX]){
    int count = 0, ocorrencia = 0;
    for (int i = 0; i < strlen(A); i++)
    {
        for (int j = 0, k = i; j < strlen(B); j++, k++)
        {
            if(A[k] != B[j]){
                count = 0;
                break;
            }else {
                count++;
                if (count == strlen(B))
                {
                    ocorrencia = 1;
                }
            }
            if (ocorrencia)
            {
                for (int l = 0, x = 0 ; l < i + strlen(B); l++, x++)
                {
                    D[l] = A[x];

                }
                for (int l = i, x = 0; x < strlen(C); l++, x++)
                {
                    D[l] = C[x];
                }
                for (int  l = i + strlen(C); l < strlen(A) + 1; l++)
                {
                    D[l] = A[l];
                }
                
            
            }
            
        }
        ocorrencia = 0;
    }

    printf("String D: %s", D);
    
}