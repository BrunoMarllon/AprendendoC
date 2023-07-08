#include <stdio.h>

int main(){

    int n, nm1, nm2, count=0;

    
    printf("\n digite a quantidade de multiplos que deseja: \n");
    scanf("%d", &n);
    do{
    printf("\n digite dois numeros maiores que zero : \n");
    scanf("%d %d", &nm1, &nm2);
    } while (nm1 == 0 || nm2 == 0);
    

    printf("os multiplos de %d e/ou %d sao: ", nm1, nm2);
    for (int i = 0; count < n; i++)
    {
        if (i%nm1==0 || i%nm2==0)
        {
            printf(" %d ", i);
            count++;
        }
    }
    



    return 0;
}