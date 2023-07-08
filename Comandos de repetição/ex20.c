#include <stdio.h>

int main(){
    int x, parcount=0, imparcount=0, xcount=0;

    for (int i = 0; ; i++)
    {  
        printf("\ndigite um numero:\n");
        scanf("%d", &x);
        if(x==1000){
            break;
        } else if (x%2==0)
        {
            printf("numero par");
        parcount++;
        }else {
            printf("numero impar");
            imparcount++;
        }
        xcount++;
        printf("\nforam lidos %d numeros pares: ", parcount );
        printf("\nforam lidos %d numeros impares: ", imparcount);
        printf("\nforam lidos %d numeros ", xcount );
    }
    


    return 0;
}