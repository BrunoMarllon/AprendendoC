#include <stdio.h>
#include <string.h>

#define MAX 100

int countWordOccurrences(char matrix[MAX][MAX], int rows, int cols, char word[MAX]);
int searchHorizontal(char matrix[MAX][MAX], int rows, int cols, char word[MAX]);
int searchVertical(char matrix[MAX][MAX], int rows, int cols, char word[MAX]);
int Vertical(char matrix[MAX][MAX], int rows, int cols, char string[MAX], int* encontrou);
int main() {
    char matrix[MAX][MAX];
    char word[MAX];
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf(" %c", &matrix[i][j]);
        }
    }

    printf("Enter the word to search: ");
    scanf("%s", word);
    int Vertical(char matrix[MAX][MAX], int rows, int cols, char string[MAX], int* encontrou);
    int occurrences = countWordOccurrences(matrix, rows, cols, word);
    printf("The word '%s' appears %d times in the matrix.\n", word, occurrences);

    return 0;
}

int countWordOccurrences(char matrix[MAX][MAX], int rows, int cols, char word[MAX]) {
    int horizontalOccurrences = searchHorizontal(matrix, rows, cols, word);
    int verticalOccurrences = searchVertical(matrix, rows, cols, word);

    return horizontalOccurrences + verticalOccurrences;
}

int searchHorizontal(char matrix[MAX][MAX], int rows, int cols, char word[MAX]) {
    int occurrences = 0;

    for (int i = 0; i < rows; i++) {
        char* row = matrix[i];
        char* found = strstr(row, word);

        while (found != NULL) {
            occurrences++;
            found = strstr(found + 1, word);
        }
    }

    return occurrences;
}

int searchVertical(char matrix[MAX][MAX], int rows, int cols, char word[MAX]) {
    int occurrences = 0;

    for (int j = 0; j < cols; j++) {
        char column[MAX];

        for (int i = 0; i < rows; i++) {
            column[i] = matrix[i][j];
        }

        column[rows] = '\0';

        char* found = strstr(column, word);

        while (found != NULL) {
            occurrences++;
            found = strstr(found + 1, word);
        }
    }

    return occurrences;
}




int Vertical(char matrix[MAX][MAX], int rows, int cols, char string[MAX], int* encontrou) {
    ////////////////////OCORRENCIA DE PALAVRAS NA HORIZONTAL//////////////////////////////////////
    for (int x = 0; x < rows; x++) {
        int tamanhodapalavra = strlen(string);
        int linhatamanho = strlen(matrix[x]);
        for (int y = 0; y <= linhatamanho - tamanhodapalavra; y++) {
            int match = 1;
            for (int z = 0; z < tamanhodapalavra; z++) {
                if (matrix[x + z][y] != string[z]) {
                    match = 0;
                    break;
                }
            }
            if (match) {
                (*encontrou)++;
            }
        }
    }
}