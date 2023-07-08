#include <stdio.h>

int main(){
    int x=0, media, soma=0;
    printf("\ndigite 10 numeros positivos\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &x);
        if(x>=0){       
        soma = soma + x;
        }else {
            i--;
        }
    }
    media=(soma)/2;

    printf("a media eh igual a: %d", media);

    return 0;
}