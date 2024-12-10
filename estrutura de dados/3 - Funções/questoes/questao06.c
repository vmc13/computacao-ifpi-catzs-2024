/*
  ********************************************
  *        Victória Mendes da Costa          *
  *        Lic. em Computação - IFPI         *
  *        Estrutura de Dados - 2024.2       *
  ********************************************
*/

#include <stdio.h>

float calcular_area_quadrado(float lado) {
    return lado * lado;
}

int main() {
    float lado;

    printf("Digite o comprimento do lado do quadrado: ");
    scanf("%f", &lado);

    printf("A área do quadrado é: %.2f\n", calcular_area_quadrado(lado));

    return 0;
}