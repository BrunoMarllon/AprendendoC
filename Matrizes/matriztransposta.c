#include <stdio.h>
#define MAX 100

int main() {
    //Declarando as variaveis
    int mat[MAX][MAX], linhas, colunas, mattransposta[MAX][MAX], count = 0;
    //Recebe o numero de colunas e linhas e verificam se eles são iguais
    for (int i = 0; i == 0;)
    {    
        printf("\nDigite o numero de linhas da matriz");
        scanf("%d", &linhas);
        printf("\nDigite o numero de colunas da matriz");
        scanf("%d", &colunas);
        if (linhas == colunas)
        {
            i++;
        }else{
            printf("\nO numero de linhas deve ser igual ao numero de colunas\n");
        }
        }
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("\nDigite o elemento [%d][%d]\n", i, j);
            scanf("%d", &mat[i][j]);
        }
        
    }
    
    //imprime a matriz
    printf("\nA matriz criada foi: \n"); 
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
           printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }
    //Transpõe a matriz
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            mattransposta[j][i] = mat[i][j];
        }
        
    }
  
    //Imprime a matriz transposta
    printf("Matriz transposta: \n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d  ", mattransposta[i][j]);
        }
        printf("\n");
    }
   for (int i = 0; i < linhas; i++)
   {
    for (int j = 0; j < colunas; j++)
    {
        if (mat[i][j] == mattransposta[i][j])
        {
            count++;
            
        }
        
    }
    
   }
   if (count == linhas*colunas)
   {
    printf("\nA matriz eh igual a sua transposta\n");
   }else{
    printf("\nA matriz nao eh igual a sua transposta\n");
   }
   
    


    return 0;
}