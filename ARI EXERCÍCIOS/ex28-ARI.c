#include <stdio.h>
#include <string.h>
#define MAX 100
void Abrevia(char nome[MAX]);
int main() {
    char nome[MAX];
    gets(nome);
    Abrevia(nome);
    printf("\nnome: %s", nome);
    return 0;
}

void Abrevia(char nome[MAX]){
    int count = 0;
   for (int i = 0; i < strlen(nome); i++)
   {
        
        if ((nome[i] == ' ') && (nome[i + 1] == 'd') && (nome[i + 2] == 'e' || nome[i + 2] == 'a' || nome[i + 2] == 'o') && (nome[i + 3] == 's'))
            {
                count++;
                nome[i] = ' ';
                nome[i + 1] = ' ';
                nome[i + 2] = ' ';
                nome[i + 3] = ' ';
            }

            if ((nome[i] == ' ') && (nome[i + 1] == 'd') && (nome[i + 2] == 'e' || nome[i + 2] == 'a' || nome[i + 2] == 'o'))
            {
                count++;
                nome[i] = ' ';
                nome[i + 1] = ' ';
                nome[i + 2] = ' ';
            }
   }
    printf("%c. ", nome[0]);
    for (int i = 0; i < strlen(nome); i++)
    {
        
        if (nome [i] == ' ' && nome[i + 1] != ' ')
        {
            printf("%c. ", nome[i+1]);
        }
        
    }
    
}