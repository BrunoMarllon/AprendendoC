#include <stdio.h>
#include <string.h> 
#define MAX 100

void Intercala(char A[MAX], char B[MAX], char C[MAX]); //Protótipo

int main() {
    char A[MAX], B[MAX], C[MAX];
    //Recebe as strings A e B
    printf("\nEscreva uma string"); 
    gets(A);
    printf("\nEscreva uma string"); 
    gets(B);

    Intercala(A, B, C); //Chama a função
    printf("\nAs string intercaladas: %s", C);

    return 0;
}

void Intercala(char A[MAX], char B[MAX], char C[MAX]){

    int tamanhoA = strlen(A); 
    int tamanhoB = strlen(B);
    int countA = 0, countB = 0;
    C[tamanhoA + tamanhoB ] = '\0';
    for (int i = 0, j = 0; i < tamanhoA + tamanhoB; j++)
    {
        if(countA < tamanhoA ){
        C[i] = A[j];
        i++;
        }

        countA++;
        
        if(countB < tamanhoB){
        C[i] = B[j];
        i++;
        }
        
        countB++;
    }
}