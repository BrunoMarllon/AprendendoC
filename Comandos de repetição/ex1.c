#include <stdio.h>
int main(){
    int count=0;
    printf("\nOs multiplos de 3 são: \n");
    for( int i = 1; count < 5; i++)
    {
       if(i%3==0){
        printf("%d ", i);
        count++;
       }
    }
    


    return 0;
}