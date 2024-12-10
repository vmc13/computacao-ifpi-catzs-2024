#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Digite o número 1: ");
        scanf("%d", &numero);
    } while (numero != 1);

    printf("Fim do programa\n");

    return 0;
}
