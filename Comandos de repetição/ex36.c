#include <stdio.h>

int main (){
    int x, somaquadrado=0, diferenca, quadradosoma=0;
    printf("\n\t este programa calcula a diferença do quadrado da soma e da soma do quadrado dos numeros de 0 a 100\n");
    for (int i = 1; i <= 10; i++)
    {
       somaquadrado = somaquadrado + (i*i);
    }
    printf("\na soma do quadrados dos numeros eh: %d\n\n", somaquadrado);

    for (int i = 1; i <= 10; i++)
    {
        quadradosoma= quadradosoma + i;
    }
      printf("\na quadrado da soma é: %d\n\n", (quadradosoma*quadradosoma));
    diferenca = somaquadrado - (quadradosoma*quadradosoma);
  
    printf("\n \t\t a diferença entre o quadrado da soma e a soma do quadrado eh : %d", diferenca);






    return 0;
}