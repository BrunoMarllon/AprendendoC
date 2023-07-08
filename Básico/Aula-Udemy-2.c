#include <stdio.h>
#define MAX 100
int soma(int x, int y){
    return x+y;
}
int main() {
    int x, y, res;
    printf("\nDigite dois numeros\n"); 
    scanf("%d %d", &x, &y);
    res = soma(x, y);
    printf("\nA soma dos dois numeros: %d \n", soma(x,y));
    return 0;
}