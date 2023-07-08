#include <stdio.h>
#define MAX 100

double celciustofahrenheit(double );

int main() {
    double celsius, resultado;
    printf("\nDigite a temperatura em C"); 
    scanf("%lf", &celsius);
    resultado = celciustofahrenheit(celsius);
    printf("\nA temperatura %lfC° equivale a %lfF°\n", celsius, resultado);
    return 0;
}

double celciustofahrenheit(double celsius){
    double fahrenheit;
    fahrenheit = celsius * (9.0 / 5.0) + 32.0;
    return fahrenheit;
}