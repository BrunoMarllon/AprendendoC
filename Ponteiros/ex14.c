#include <stdio.h>
#define MAX 100

void Substitui(char [], char);

int main() {
    char string[MAX], n;
    printf("\nInforme uma string\n");
    gets(string);
   
    printf("\nInforme um caractere\n");
    scanf("%c", &n);
    getchar();
    Substitui(string, n);
    printf("\nString: %s", string);


    return 0;
}

void Substitui(char string[MAX], char n){
   char* ptr = string;
    while (*ptr != '\0'){
        *ptr = n;
        ptr++;

    }


}