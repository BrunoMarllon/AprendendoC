#include <stdio.h>
#define MAX 100

float sphereradius(float);

int main() {
    float raio, volume;
    printf("\nDigite o valor do raio da esfera\n"); 
    scanf("%f", &raio);
    volume = sphereradius(raio);
    printf("\nO volume da esfera: %fcm^3", volume);
    return 0;
}

float sphereradius(float raio){
    return (4.0/3.0) * raio * raio * raio * 3.14;
}


