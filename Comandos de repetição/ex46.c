#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int x=0, aleatorio;
    srand(time(NULL));
   
    aleatorio = 1 + (rand()%1000);
    printf("\n\t\tescreva um numero de 0 a 1000\n");
    

while (x!=aleatorio)
{
     scanf("%d", &x);
    if (x<aleatorio)
    {
        printf("\nescreva um numero maior\n");
}else if (x>aleatorio)
{
     printf("\nescreva um numero menor\n");
 
}
}

    printf("\n\t\t\tvoce acertou o numero!!!!!!!\n");
    printf("\n\n %d", aleatorio);
   

    return 0;
}