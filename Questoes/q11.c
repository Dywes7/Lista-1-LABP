#include <stdio.h>

int main() {

    float cotacao, reais, dolar;

    puts("Digite o valor atual da cotação do dolar: ");
    scanf("%f", &cotacao);

    puts("Quantos reais você deseja converter em dolar?");
    scanf("%f", &reais);

    dolar = reais / cotacao;

    printf("%2.f reais é igual à %2.f dolares.", reais, dolar);
}