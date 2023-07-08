#include <stdio.h>

int main (){
    int terno;

    for (int i = 0; i < 1000; i++)
    {
        
        for (int j = 0; j < 1000; j++)
        {
         
                terno = (i*i)+(j*j);
               if (terno==1000)
               {
                 printf("\n\t (%d)^2 + (%d)^2 = 1000", i, j);
                         }
        
    }
    }
    


    return 0;
}