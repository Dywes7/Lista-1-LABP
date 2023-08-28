#include <stdio.h>
#include <math.h>

int main() {

    double num1, num2, num3;
    double media_aritmetica, media_geometrica;

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    printf("Digite o terceiro número: ");
    scanf("%lf", &num3);

    media_aritmetica = (num1 + num2 + num3) / 3;

    media_geometrica = pow(num1 * num2 * num3, 1.0 / 3.0);

    printf("Média aritmética: %.2lf\n", media_aritmetica);
    printf("Média geométrica: %.2lf\n", media_geometrica);


}
