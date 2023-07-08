#include <stdio.h>

int main(){
    float x, media=0, soma=0;
    
    printf("escreva suas notas de 10 a 20: \n");
    for (float i = 1; ; i++)
    {
        scanf("%f", &x);     
         if(x>20 ){
            break;
        }
        if(x<10 ){
            break;
        }
     
        soma = soma + x;
        media = soma/i;
        printf("a media aritmetica e igual a: %f\n", media);
        
          
    }



    return 0;
}