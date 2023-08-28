#include <stdio.h>

int main() {

    float comprimento, largura, altura, volume;

    puts("Digite o valor do comprimento: ");
    scanf("%f", &comprimento);

    puts("Digite o valor da largura: ");
    scanf("%f", &largura);

    puts("Digite o valor da altura: ");
    scanf("%f", &altura);

    volume = comprimento * largura * altura;

    printf("O volume da caixa retangular é: %2.f", volume);
}