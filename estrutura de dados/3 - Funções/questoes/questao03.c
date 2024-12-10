/*
  ********************************************
  *        Victória Mendes da Costa          *
  *        Lic. em Computação - IFPI         *
  *        Estrutura de Dados - 2024.2       *
  ********************************************
*/

#include <stdio.h>

float calcular_media(float nota1, float nota2, float nota3) {
    return (nota1 + nota2 + nota3) / 3;
}

int main() {
    float nota1, nota2, nota3;

    printf("1ª nota: ");
    scanf("%f", &nota1);

    printf("2ª nota: ");
    scanf("%f", &nota2);

    printf("3ª nota: ");
    scanf("%f", &nota3);

    printf("A média do aluno é: %.2f\n", calcular_media(nota1, nota2, nota3));

    return 0;
}