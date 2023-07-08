#include <stdio.h>

int main(){
    int x, y;
    printf("Informe as duas notas do aluno\n");
    scanf("%d", &x),
    scanf("%d", &y);
    if(x<0){
        printf("primeira nota inválida");
    } else if(y>10){
        printf("segunda nota inválida");
    } else if(y<0){
        printf("segunda nota  nota inválida");
    } else if(x>10){
        printf("primeira nota inválida");
    } else{printf("Notas validas");
    }



    return 0;
}