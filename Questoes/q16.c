#include <stdio.h>

int main() {

float valor_hora_aula, horas_trabalhadas, desconto_percentual, salario_bruto, salario_liquido;

printf("VALOR DA HORA AULA: ");
scanf("%f", &valor_hora_aula);

printf("HORAS TRABALHADAS: ");
scanf("%f", &horas_trabalhadas);

printf("DESCONTO PERCENTUAL DO INSS: ");
scanf("%f", &desconto_percentual);

salario_bruto = (valor_hora_aula * horas_trabalhadas);
salario_liquido = salario_bruto * ((100 - desconto_percentual) / 100);

printf("Salario bruto: %.2f\n", salario_bruto);
printf("Salario líquido: %.2f", salario_liquido);

}