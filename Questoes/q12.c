#include <stdio.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL, "Portuguese");
    
    float num1, num2;

    puts("Digite o valor do primeiro n�mero: ");
    scanf("%f", &num1);

    puts("Digite o valor do segundo n�mero: ");
    scanf("%f", &num2);

    printf("A soma dos n�meros �: %2.f\n", num1 + num2);
    printf("O produto dos n�meros �: %2.f\n", num1 * num2);
    printf("A diferen�a entre os n�meros �: %2.f\n", num1 - num2);
    printf("O quociente dos n�meros �: %2.f\n", num1 / num2);
    printf("O resto da divis�o dos dois n�meros �: %d\n", (int) num1 % (int) num2);


}