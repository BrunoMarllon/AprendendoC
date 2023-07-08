#include <stdio.h>
#define MAX 100

void date(int dia, int mes, int ano);

int main() {
    int dia, mes, ano;
    for (int i = 0; i == 0; )
    {
        printf("\nDigite o dia\n"); 
        scanf("%d", &dia);
        if(dia>= 1 && dia <= 31){
            i = 1;
        }else {
        printf("\nEscreva uma data valida\n");
        }
    }
    
    for (int i = 0; i == 0; )
    {
        printf("\nDigite o mes\n"); 
        scanf("%d", &mes);
        if(mes >= 1 && mes <= 12){
            i = 1;
        }else {
        printf("\nEscreva uma data valida\n");
        }
    }
    for (int i = 0; i == 0; )
    {
        printf("\nDigite o ano\n");
        scanf("%d", &ano);
        if(ano >= 0){
            i = 1;
        }else {
        printf("\nEscreva uma data valida\n");
        }
    }
    
    
    date(dia, mes, ano);
    return 0;
}

void date(int dia, int mes, int ano){

    

    printf("\nData informada: %d/%d/%d", dia, mes, ano);
    
    switch(mes){
        case 1: 
        printf("\nData por extenso: ");
        printf("%d de Janeiro de %d", dia, ano);
        break;
        case 2:
        printf("\nData por extenso: ");
        printf("%d de Fevereiro de %d", dia, ano);
        break;
        case 3:
        printf("\nData por extenso: ");
        printf("%d de Marco de %d", dia, ano);
        break;
        case 4:
        printf("\nData por extenso: ");
        printf("%d de Abril de %d", dia, ano);
        break;
        case 5:
        printf("\nData por extenso: ");
        printf("%d de Maio de %d", dia, ano);
        break;
        case 6: 
        printf("\nData por extenso: ");
        printf("%d de Junho de %d", dia, ano);
        break;
        case 7:
        printf("\nData por extenso: ");
        printf("%d de Julho de %d", dia, ano);
        break;
        case 8:
        printf("\nData por extenso: ");
        printf("%d de Agosto de %d", dia, ano);
        break;
        case 9:
        printf("\nData por extenso: ");
        printf("%d de Setembro de %d", dia, ano);
        break;
        case 10:
        printf("\nData por extenso: ");
        printf("%d de Outubro de %d", dia, ano);
        break;
        case 11:
        printf("\nData por extenso: ");
        printf("%d de Novembro de %d", dia, ano);
        break;
        case 12:
        printf("\nData por extenso: ");
        printf("%d de Dezembro de %d", dia, ano);
        break;

        default:
        printf("\nO mes digitado nao existe\n");
        break;
    }

    
}