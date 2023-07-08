#include <stdio.h>
#define MAX 100

struct vetores{
    float x;
    float y;
    float z;
};

void Soma(struct vetores vetor1, struct vetores vetor2, struct vetores *resultado);


int main() {
    struct vetores vetor1, vetor2, resultado;
    printf("\nInforme o valor das coordenadas do vetor 1\n");
    printf("\nx: ");
    scanf("%f", &vetor1.x);
    printf("\ny: ");
    scanf("%f", &vetor1.y);
    printf("\nz: ");
    scanf("%f", &vetor1.z);

    printf("\nInforme o valor das coordenadas do vetor 2\n");
    printf("\nx: ");
    scanf("%f", &vetor2.x);
    printf("\ny: ");
    scanf("%f", &vetor2.y);
    printf("\nz: ");
    scanf("%f", &vetor2.z);
    Soma(vetor1, vetor2, &resultado);

    printf("\nValor das coordenadas: (%f, %f, %f)", resultado.x, resultado.y, resultado.z);
    return 0;
}

void Soma(struct vetores vetor1, struct vetores vetor2, struct vetores *resultado){

    resultado->x = vetor1.x + vetor2.x;
    resultado->y = vetor1.y + vetor2.y;
    resultado->z = vetor1.z + vetor2.z;
    }