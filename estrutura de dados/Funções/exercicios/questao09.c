/*
  ********************************************
  *        Victória Mendes da Costa          *
  *        Lic. em Computação - IFPI         *
  *        Estrutura de Dados - 2024.2       *
  ********************************************
*/

#include <stdio.h>

void exibir_em_real(float valor) {
    printf("R$ %.2f\n", valor);
}

int main() {
    float valor;

    printf("Digite um valor em reais: ");
    scanf("%f", &valor);

    exibir_em_real(valor);

    return 0;
}
