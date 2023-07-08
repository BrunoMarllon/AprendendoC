#include <stdio.h>
#define MAX 100
#define PESSOAS 3
struct Endereco{
    char rua[MAX];
    char complemento[MAX];
    char bairro[MAX];
    char cidade[MAX];
    char estado[MAX];
    char pais[MAX];
    int cep;
    int numero;
};
struct Telefone{
    int ddd;
    int numero;
};
struct Aniversario
{
    int dia;
    int mes;
    int ano;
};

struct Agenda{
    struct Endereco endereco[PESSOAS];
    struct Telefone telefone[PESSOAS];
    struct Aniversario aniversario[PESSOAS];
    char nome[MAX];
    char email[MAX];
    char endereco[MAX];

};

int main() {
    struct Agenda agenda[MAX];
    for (int i = 0; i < PESSOAS; i++)
    {
        printf("\n\t\t---------Pessoa 1--------------");
        printf("\nNome: ");
        gets(agenda[i].nome);
        printf("\nEmail: ");
        gets(agenda[i].email);
        //Endereco
        printf("\nEndereço: ");
        printf("\nRua: ");
        gets(agenda[i].endereco[i].rua);
        printf("\nNumero: ");
        gets(agenda[i].endereco[i].numero);
        printf("\nComplemento: ");
        gets(agenda[i].endereco[i].complemento);
        printf("\nAgenda: ");
        gets(agenda[i].endereco[i].bairro);
        printf("\nCEP: ");
        gets(agenda[i].endereco[i].cep);
        printf("\nCidade: ");
        gets(agenda[i].endereco[i].cidade);
        printf("\nEstado: ");
        gets(agenda[i].endereco[i].estado);
        printf("\nPais: ");
        gets(agenda[i].endereco[i].pais);
        //Telefone
        printf("\nTelefone: ");
        printf("\nDDD: ");
        scanf("%d", &agenda[i].telefone[i].ddd);
        printf("\nNumero: ");
        scanf("%d", &agenda[i].telefone[i].numero);
        getchar();
        //Aniversario
        printf("\nAniversario: ");
        printf("\nDia: ");
        printf("%d", &agenda[i].aniversario[i].dia);
        printf("\nMes: ");
        scanf("%d", &agenda[i].aniversario[i].mes);
        printf("\nAno: ");
        scanf("%d", &agenda[i].aniversario[i].ano);

    }
    
    return 0;
}