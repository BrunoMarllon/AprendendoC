#include <stdio.h>
#define MAX 100

int convertingtoseconds(int hora, int minuto, int segundo);

int main() {
    int hora, minuto, segundo, resultado;
    printf("\nEscreva uma hora, um minuto, e o segundo\n"); 
    scanf("%d %d %d", &hora, &minuto, &segundo);
    resultado = convertingtoseconds(hora, minuto, segundo);
    printf("\n%dh, %dmin e %ds sao equivalentes a %ds", hora, minuto, segundo, resultado);
    return 0;
}

int convertingtoseconds(int hora, int minuto, int segundo){
    int segundos = segundo;
    segundos = segundos +  minuto * 60;
    segundos = segundos + hora * 60 * 60;

    return segundos;
}