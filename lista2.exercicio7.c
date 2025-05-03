#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que calcule o sal�rio semanal de um trabalhador. As entradas
s�o o n�mero de horas trabalhadas na semana e o valor da hora. At� 40 h/semana n�o se
acrescenta nenhum adicional. Acima de 40h e at� 60h h� um b�nus de 50% para essas
horas. Acima de 60h h� um b�nus de 100% para essas horas.*/


float calcular_salario(float horas_trabalhadas, float valor_hora) {
    float salario;

    if (horas_trabalhadas <= 40) {
        salario = horas_trabalhadas * valor_hora;
    } else if (horas_trabalhadas <= 60) {
        salario = (40 * valor_hora) + ((horas_trabalhadas - 40) * valor_hora * 1.5);
    } else {
        salario = (40 * valor_hora) + (20 * valor_hora * 1.5) +
                  ((horas_trabalhadas - 60) * valor_hora * 2);
    }

    return salario;
}

int main(void) {
    float horas, valor, salario_total;

    printf("Digite o n�mero de horas trabalhadas na semana: ");
    scanf("%f", &horas);

    printf("Digite o valor da hora trabalhada (R$): ");
    scanf("%f", &valor);

    salario_total = calcular_salario(horas, valor);

    printf("Sal�rio total da semana: R$ %.2f\n", salario_total);

    return 0;
}