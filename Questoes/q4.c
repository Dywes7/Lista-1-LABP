#include <stdio.h>


int main() {

    int numero;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    printf("Metade do valor digitado: %2.f\n", (float) numero / 2);
    printf("Triplo do valor digitado: %d\n", 3 * numero);
    printf("O quadrado do valor digitado: %d\n", numero * numero);
    

}