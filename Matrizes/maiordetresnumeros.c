#include <stdio.h>
#define MAX 100

int main() {
    int x, y, z;
    printf("\nDigite 3 numeros\n"); 
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    getchar();

    if (x>y && x>z)
    {
        printf("%d eh o maior numero\n", x);
    }
    if (y>x && y>z)
    {
        printf("%d eh o maior numero\n", y);
    }
    if (z>x && z>y)
    {
        printf("%d eh o maior numero\n", z);
    }
   
    return 0;
}