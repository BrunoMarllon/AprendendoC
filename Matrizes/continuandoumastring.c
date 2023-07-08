#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    int  n, position = 0, count = 0;
    char vet[MAX], vetconcatena[MAX];
    printf("\nQuantos nomes voce tem?\n"); 
    for (int i = 0; i == 0; )
    { 
        scanf("%d", &n);
        if(n > 0){
            i++;
        }
    }

    for (int i = 0; i < n; i++)
        {
            printf("\nEscreva seu %d nome\n", i );
            fgets(vet, MAX, stdin);
            strtok(vet, "\n"); // remove newline character
            for (int j = 0; j < strlen(vet) ; j++, position++)
                {
                    vetconcatena[position] = vet[j];
                    count++;
                }
            position = count * (strlen(vet));

        }

    printf("\n nome:\n ");

    for (int i = 0; i < position; i++)
    {
        printf("%c", vetconcatena[i]);
    }
    return 0;
}