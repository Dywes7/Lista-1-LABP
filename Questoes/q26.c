#include <stdio.h>
#include <math.h>

int main() {

    float x1, x2, y1, y2, distancia;

    puts("Digite as coordenadas do primeiro ponto...");

    printf("x1: ");
    scanf("%f", &x1);

    printf("y1: ");
    scanf("%f", &y1);

    
    puts("Digite as coordenadas de segundo ponto...");
    
    printf("x2: ");
    scanf("%f", &x2);

    printf("y2: ");
    scanf("%f", &y2);

    distancia = sqrt((pow(x2 - x1, 2)) + (pow(y2 - y1, 2)));

    printf("A distância entre estes dois pontos no plano é: %.2f", distancia);

}