#include <stdio.h>

int soma_primeiros_elementos(int *v1, int *v2, int tam) {
    if (tam > 0) {
        return v1[0] + v2[0];
    } else {
        printf("Erro: O tamanho dos vetores deve ser maior que zero.\n");
        return 0;
    }
}

int main() {
    int vetor1[] = {5, 10, 15};
    int vetor2[] = {3, 6, 9};

    int tamanho = 3;

    int soma = soma_primeiros_elementos(vetor1, vetor2, tamanho);

    // Exibe o resultado
    printf("A soma do primeiro elemento dos dois vetores é: %d\n", soma);

    return 0;
}
