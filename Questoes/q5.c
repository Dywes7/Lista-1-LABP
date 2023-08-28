#include <stdio.h>


int main() {

    float valor;
    
    printf("Digite total da conta do restaurante: ");
    scanf("%f", &valor);
    

    printf("Valor a ser pago: %2.f\n", valor * 1.1);

}