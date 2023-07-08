#include <stdio.h>

int main(){
    int x;
    for (int i=0, j=0; i <3; j++)
    {
        if(j%11==0){
            printf("%d", j);
            i++;
        }
        if(j%13==0){
            printf("%d", j);
            i++;
        }
        if(j%17==0){
            printf("%d", j);
            i++;
        }
    }
    


    return 0;
}