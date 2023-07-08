#include <stdio.h>
#define MAX 100
//Escrevendo Funções

//Estrutura das funçoes
/*
- Tipos de retorno
- Nome
- Parâmetros de entrada (Opcional)
- Implementação
- Retorno (Opcional)
*/
void mensagem(){
    printf("\nBem-vindo\n");
}
int soma(int num1, int num2){
    return num1+num2;
}
int sum(int num1, int num2){
    int res = num1+num2;
    return res;

}
char proximochar(char caractere){
    printf("\n\n%c\n", caractere+1);

}
int main() {
    char cara = 'a';
    printf("\nYes baaby\n"); 
    mensagem();
    int retorno = soma(5, 4);
    int resultado = sum(3, 4);
    printf("\nPrimeira soma: %d\nSegunda soma: %d\n", retorno, resultado);
    printf("\nSoma : %d", soma(45, 65));
    proximochar(soma(90, 9));
    return 0;
}