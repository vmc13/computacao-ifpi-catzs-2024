#include <stdio.h>

int main() {
    int velocidade;
    printf("Digite a velocidade do carro: ");
    scanf("%d", &velocidade);

    if (velocidade > 80) {
        float multa = (velocidade - 80) * 10.0;
        printf("Você foi multado em R$ %.2f\n", multa);
    }

    return 0;
}
