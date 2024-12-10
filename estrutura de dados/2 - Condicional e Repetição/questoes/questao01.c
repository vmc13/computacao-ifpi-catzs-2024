#include <stdio.h>

int main() {
    int velocidade;
    printf("Digite a velocidade do carro: ");
    scanf("%d", &velocidade);

    if (velocidade > 80) {
        printf("Vermelho\n");
    } else {
        printf("Verde\n");
    }

    return 0;
}
