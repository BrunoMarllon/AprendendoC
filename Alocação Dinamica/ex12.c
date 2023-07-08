#include <stdio.h>
#include <stdlib.h>
#define MAX 100

struct produto{
    int codigo;
    char nome[MAX];
    int quantidade;
    float preco;

};
void entradaDados(struct produto* x, int n);
int main() {
    int n, maiorpreco = 0, maiorquantidade = 0, prod;
    struct produto *x;

    printf("\nInforme a quantidade de produtos existentes");
    scanf("%d", &n);
    
    x = (struct produto*)malloc(n * sizeof(struct produto));
   
   entradaDados(x, n);
    
    for (int i = 0; i < n; i++)
    {
        if (x[i].preco > maiorpreco)
        {
            
            prod = i;
        }
    }
    printf("\nO %s possui o maior preco: $%f", x[prod].nome, x[prod].preco);
    for (int i = 0; i < n; i++)
    {
        if (x[i].preco > maiorquantidade)
        {
            
            prod = i;
        }
        
    }  
    printf("\nO produto %s possui a maior quantidade de unidades: %d", x[prod].nome, x[prod].quantidade);
    
    
    free(x);
    
    return 0;
}

void entradaDados(struct produto* x, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nInforme o codigo do produto %d: ", i + 1);
        scanf("%d", &x[i].codigo);
        getchar();

        printf("Informe o nome do produto %d: ", i + 1);
        fgets(x[i].nome, MAX, stdin);

        printf("Informe a quantidade do produto %d: ", i + 1);
        scanf("%d", &x[i].quantidade);

        printf("Informe o preco do produto %d: ", i + 1);
        scanf("%f", &x[i].preco);
    }
}
