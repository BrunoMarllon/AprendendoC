#include <stdio.h>

int main(){
    int count = 100;
    int y=1, z=1;

    for (int i = 1; i <= count; i++)
    {
        printf("%d ", i);

    }

printf("\n\n");

    while( y <=100){

        printf("%d ", y);
        y++;

    }

    printf("\n\n");
    
do {
    printf("%d ",z);
    z++;
}
while(z<=100);

    return 0;
}