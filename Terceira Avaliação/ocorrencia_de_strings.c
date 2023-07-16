#include <stdio.h>
#include <string.h>

void substituirString(char *A, const char *B, const char *C) {
    int lenA = strlen(A);
    int lenB = strlen(B);
    int lenC = strlen(C);

    // Variável para armazenar a nova string
    char novaString[1000] = "";
    int novaStringIndex = 0;

    // Variável para verificar se uma ocorrência de B foi encontrada
    int encontrouOcorrencia = 0;

    for (int i = 0; i < lenA; i++) {
        // Verifica se há uma ocorrência de B na posição atual
        if (strncmp(A + i, B, lenB) == 0) {
            // Adiciona C na nova string
            strcat(novaString, C);
            novaStringIndex += lenC;

            // Atualiza o índice para pular a ocorrência de B em A
            i += lenB - 1;

            // Define que uma ocorrência foi encontrada
            encontrouOcorrencia = 1;
        } else {
            // Caso não seja uma ocorrência, adiciona o caractere atual de A na nova string
            novaString[novaStringIndex] = A[i];
            novaStringIndex++;
        }
    }

    // Adiciona o caractere nulo para finalizar a nova string
    novaString[novaStringIndex] = '\0';

    // Copia a nova string de volta para A
    strcpy(A, novaString);

    // Exibe o resultado
    printf("%s\n", A);
}

int main() {
    char A[1000] = "Abra a porta para entrar para poder descansar calmamente";
    char B[100] = "para";
    char C[100] = "e tente";

    substituirString(A, B, C);

    return 0;
}
