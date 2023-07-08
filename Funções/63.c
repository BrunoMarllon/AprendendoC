#include <stdio.h>
#include <string.h>
#define MAX 100

void LeString(char* );
void Concatena(char* , char* );

int main() {
    char string1[MAX], string2[MAX];
    LeString(string1);
    LeString(string2);
    Concatena(string1 , string2 );
    printf("\nAs strings concatenadas: %s", string1); 
    return 0;
}


void LeString(char* str){
    printf("\nInforme uma string\n");
    fgets(str, MAX, stdin);

}
void Concatena(char* str1, char* str2){
    int tamanho;
    tamanho = strlen(str1) - 1 ;
    
    for (int i = 0; str2[i] != '\0'; i++, tamanho++)
    {
        str1[tamanho] = str2[i];
        
    }
    
    str1[tamanho] = '\0';
    


} 