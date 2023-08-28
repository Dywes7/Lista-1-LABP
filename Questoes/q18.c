#include <stdio.h>
#define pi 3.14159

int main() {

    float raio;

    printf("DIGITE O VALOR DO RAIO DO CÍRCULO: ");
    scanf("%f", &raio);

    printf("SEU DIÂMETRO É: %.2f\n", raio * 2);
    printf("A MEDIDA DA CIRCUNFERÊNCIAS É: %.2f\n", 2 * pi * raio);
    printf("O VALO DA ÁREA É: %.2f\n", pi * (raio * raio));
}