#include <stdio.h>

int main() {

    int dias_trabalhados;
    float valor_liquido;

    puts("Quantos dias você trabalhou?");
    scanf("%d", &dias_trabalhados);

    if (dias_trabalhados <= 10) {
        valor_liquido = (float) dias_trabalhados * 50.25;
    } else if (dias_trabalhados <= 20) {
        valor_liquido = (dias_trabalhados * 50.25) * 1.2;
    } else {
        valor_liquido = (dias_trabalhados * 50.25) * 1.3;
    }

    valor_liquido = valor_liquido * 0.9;

    printf("O salário líquido do vendedor é: %.2f", valor_liquido);

}