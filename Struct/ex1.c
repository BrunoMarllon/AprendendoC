#include <stdio.h>
#define MAX 100

struct horario{
    int hora;
    int minutos;
    int segundos;
};

struct data{
    int dia;
    int mes;
    int ano;
};

struct compromisso
{
    struct horario x;
    struct data y;
    char descricao[100];
};

int main() {
    struct horario hour;
    struct data date;
    struct compromisso appointment;
    //HORARIO
    printf("\nInforme a hora\n");
    scanf("%d", &hour.hora);
    printf("\nInforme os minutos\n");
    scanf("%d", &hour.minutos);
    printf("\nInforme os segundos\n");
    scanf("%d", &hour.segundos);

    //DATA
    printf("\nInforme o dia\n");
    scanf("%d", &date.dia);
    printf("\nInforme o mes\n");
    scanf("%d", &date.mes);
    printf("\nInforme o ano\n");
    scanf("%d", &date.ano);
    getchar();
    //COMPROMISSO
    appointment.x = hour;
    appointment.y = date;

    printf("\nInforme a descricao do compromisso\n");
    fgets(appointment.descricao, 100, stdin);

    printf("\nAs %d:%d:%d", hour.hora, hour.minutos, hour.segundos);
    printf("\nNo dia %d/%d/%d", date.dia, date.mes, date.ano);
    printf("\nVoce ira %s", appointment.descricao);
    return 0;
}