#include <stdio.h>
#define MAX 100

int main() {
    int mat[MAX][MAX];
    int *ptr = &mat[0][0];
    
    for (int i = 0; i < 3; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("%d ", ptr);
            ptr++;
        }
      printf("\n");  
    }
    
    return 0;
}