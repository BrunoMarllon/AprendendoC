#include <stdio.h>

int main (){
    int x, y;
    printf("escreva dois numeros\n");
    scanf("%d", &y);
    scanf("%d", &x);
    if(x>y){
        printf("o numero %d eh maior\n", x);
       printf("a diferença entre os dois numeros eh %d\n", (x-y));
    }else if(x<y){
        printf("o numero maior eh %d\n", y);
       printf("a diferenca entre os dois numeros eh %d\n", (y-x));
    }

return 0;
}