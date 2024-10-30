#include <stdio.h>

// Questão 8: Tempo de Viagem de um Carro
void questao8()
{
    float distancia, velocidade, tempo;

    printf("Digite a distancia percorrida (km): ");
    scanf("%f", &distancia);

    printf("Digite a velocidade (km/h): ");
    scanf("%f", &velocidade);

    tempo = distancia / velocidade;

    printf("Tempo: %.4f hr\n", tempo);
}

int main()
{
    questao9();

    return 0;
}
