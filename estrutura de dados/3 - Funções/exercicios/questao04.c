/*
  ********************************************
  *        Victória Mendes da Costa          *
  *        Lic. em Computação - IFPI         *
  *        Estrutura de Dados - 2024.2       *
  ********************************************
*/

#include <stdio.h>

int verificar_aprovacao(float media) {
    return (media >= 7.0) ? 0 : 1;
}

int main() {
    float media;

    printf("Digite a média do aluno: ");
    scanf("%f", &media);

    if (verificar_aprovacao(media) == 0) {
        printf("A média %.2f é aprovativa.\n", media);
    } else {
        printf("A média %.2f é reprovativa.\n", media);
    }

    return 0;
}