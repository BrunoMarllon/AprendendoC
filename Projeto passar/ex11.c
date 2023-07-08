#include <stdio.h>

int main(){
    char x;
    int nmr1, nmr2, result;

    printf("escolha uma opcao: \n 1- Soma de dois numeros \n 2- diferenca entre dois numeros (maior pelo menor) \n 3- produto entre dois numeros.\n 4- divisao entre dois numeros (denominador nao pode ser 0)\n"  );
    scanf("%c", &x);
    if(x == '1'){
        printf("\nescreva dois numeros\n");
        scanf("%d", &nmr1);
        scanf("%d", &nmr2);
        result = nmr1 +  nmr2;
        printf("\na soma eh igual a: %d\n", result);
    }
        
    if(x == '2'){
        printf("\nescreva dois numeros\n");
        scanf("%d", &nmr1);
        scanf("%d", &nmr2);
        if(nmr1>nmr2){
            result = nmr1 - nmr2;
        }else if(nmr1<nmr2){
            result = nmr2 - nmr1;
        }
        printf("\na diferenca eh igual a: %d\n", result);
    }
    if(x == '3'){
        printf("\nescreva dois numeros\n");
        scanf("%d", &nmr1);
        scanf("%d", &nmr2);
        result = nmr1 *  nmr2;
        printf("\no produto eh igual a: %d\n", result);
    }
    if(x == '4'){
        printf("escreva dois numeros: \n");
        printf("\ninforme o numerador\n");
        scanf("%d", &nmr1);
        printf("\ninforme o denominador\n");
        scanf("%d", &nmr2);
       
        if(nmr2 == 0){
            printf("\no denominador nao pode ser zero\n");
        }else {
              result = nmr1 /  nmr2;
            printf("\na divisão eh igual a: %d\n", result);
        }



    }

        

    

    return 0;
}