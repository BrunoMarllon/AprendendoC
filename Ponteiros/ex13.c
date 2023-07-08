#include <stdio.h>
#define MAX 100 

int Substring(char* , char* );

int main() {

    char string[MAX], substring[MAX];
    int count = 0, resultado;

    
    printf("\nEscreva a string\n"); 
    fgets(string, MAX, stdin);
    printf("\nEscreva a substring\n");
    fgets(substring, MAX, stdin);
    //Elimina o \n
    for (int i = 0; ; i++)
    {
        if (string[i] == '\0')
        {
            string[i - 1] = '\0';
            break;
        }
        
    }
     for (int i = 0; ; i++)
    {
        if (substring[i] == '\0')
        {
            substring[i - 1] = '\0';
            break;
        }
        
    }
    resultado = Substring(string, substring);

    if (resultado)
    {
        printf("\nA substring %s existe na string %s ", substring, string);
    }else
    printf("\nA substring %s nao existe na string '%s'\n", substring, string);
    

    
    return 0;
}

int Substring(char* string, char* substring){
    int tamanhodasubstring = 0, count = 0;
    for (int i = 0; substring[i] != '\0'; substring++)
    {
        tamanhodasubstring++;
    }
    

    for (int i = 0; *string != '\0'; string++)
    {
        for (int j = 0; *substring != '\0'; substring++)
        {
            if (*string != *substring)
            {
                count = 0;
                break;  
            }else{
                count++;
                if (count == tamanhodasubstring)
                    {
                        return 1;
                    }
            }
            
        }
        
      count = 0;  
    }
    if (count == 0)
    {
        return 0;
    }
    
    
    return 0;
}