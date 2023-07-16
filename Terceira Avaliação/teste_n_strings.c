#include <stdio.h>
#define MAX 100

int main() {
    char string[MAX];
    for (int i = 0; i < 5; i++)
    {
        printf("\nInforme a string %d", i);
        gets(string);
        printf("\nstring informada: %s", string);
    }
    
    return 0;
}