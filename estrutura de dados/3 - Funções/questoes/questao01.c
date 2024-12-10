/*
  ********************************************
  *        Victória Mendes da Costa          *
  *        Lic. em Computação - IFPI         *
  *        Estrutura de Dados - 2024.2       *
  ********************************************
*/

#include <stdio.h>

int sucessor(int numero) {
    return numero + 1;
}

int main() {
    
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("O sucessor de %d é %d\n", numero, sucessor(numero));

    return 0;
}