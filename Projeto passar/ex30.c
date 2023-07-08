#include <stdio.h>

int main(){
    int x,y,z;
    printf("digite 3 numeros");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    if(x>y & x>z){
        printf("%d ",x);
        if(y>z){
            printf("%d %d", y, z);
        }else if(z>y){
            printf("%d %d", z, y);
        }else if(y==z){
            printf("%d %d", z, y);
        }
    } else if(y>x & y>z){
            printf("%d ",y);
            if(x>z){
                printf("%d %d", x, z);
            }else if(z>x){
                printf("%d %d", z, x);
            }else if(x==z){
                printf("%d %d", z, x);
            }
        }else if(z>x & z>y){
            printf("%d ",z);
            if(x>y){
                printf("%d %d", x, y);
            }else if(y>x){
                printf("%d %d", y, x);
            }else if(y==x){
                printf("%d %d", y, x);
            }
        } else if(x==y==z){
            printf("%d, %d, %d", x, y, z);

        }

    return 0;
}