/*Fazer um programa para receber um número inteiro de segundos do usuário e imprimir
a quantidade correspondente em horas, minutos e segundos.*/

#include <stdio.h>

int main (void)
{
    int inputSec;

    printf("Digite quantos segundos deseja converter: ");
    scanf( "%d" , &inputSec);

    int horas = inputSec / 3600;
    int minutos = (inputSec % 3600) / 60;
    int segundos = inputSec % 60;

    printf("horas: %d\n", horas);
    printf("minutos: %d\n", minutos);
    printf("segundos: %d\n", segundos);
    
    return 0;
}