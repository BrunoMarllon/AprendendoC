#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int d1, d2, n;
    srand(time(NULL));
    
    printf("\n\nquantas vezes voce gostari de lancar os dados?\n\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        d1 = (rand() % 6)+1;
        d2 = (rand() % 6)+1;
        printf("\nlancamento: %d", i+1);
        printf("\no numero do primeiro dado eh: %d", d1);
        printf("\no numero do segundo dado eh: %d", d2);  

        if (d1==d2)
        {
            printf("\nd1=d2");
        }
        if (d1>d2)
        {
            printf("\nd1>d2");
        }
        if (d2>d1)
        {
            printf("\nd2>d1");
        }
                   
    }
    
    

    


    return 0;
}