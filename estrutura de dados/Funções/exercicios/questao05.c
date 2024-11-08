/*
  ********************************************
  *        Victória Mendes da Costa          *
  *        Lic. em Computação - IFPI         *
  *        Estrutura de Dados - 2024.2       *
  ********************************************
*/

#include <stdio.h>

float calcular_imc(float massa, float altura) {
    return massa / (altura * altura);
}

int main() {
    float massa, altura;

    printf("Digite sua massa (kg): ");
    scanf("%f", &massa);

    printf("Digite sua altura (metros): ");
    scanf("%f", &altura);

    printf("O seu IMC é: %.2f\n", calcular_imc(massa, altura));

    return 0;
}