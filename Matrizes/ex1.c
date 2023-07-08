#include <stdio.h>
#define MAX 100

int main() {
    int mat[MAX][MAX];
    printf("escreva 16 numeros\n"); 
    for(int i = 0; i < 4; i++){
       for (int j = 0; j < 4; j++)
       {
             scanf("%d", &mat[i][j] );
       }
       
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(mat[i][j]>10){
                
                printf(" [ %d ]", mat[i][j]);
            }
        }
        printf("\n");
    }
    
    return 0;
}