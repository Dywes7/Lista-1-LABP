#include <stdio.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL, "Portuguese");
    
    float num1, num2;

    puts("Digite o valor do primeiro número: ");
    scanf("%f", &num1);

    puts("Digite o valor do segundo número: ");
    scanf("%f", &num2);

    printf("A soma dos números é: %2.f\n", num1 + num2);
    printf("O produto dos números é: %2.f\n", num1 * num2);
    printf("A diferença entre os números é: %2.f\n", num1 - num2);
    printf("O quociente dos números é: %2.f\n", num1 / num2);
    printf("O resto da divisão dos dois números é: %d\n", (int) num1 % (int) num2);


}