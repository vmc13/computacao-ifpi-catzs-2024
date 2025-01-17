#include <stdio.h>

void exibir_todos(int *v, int tam) {
    if (tam > 0) {
        printf("Elementos do vetor:\n");
        for (int i = 0; i < tam; i++) {
            printf("%d ", v[i]);
        }
        printf("\n");
    } else {
        printf("O vetor está vazio.\n");
    }
}

int main() {
    int numeros[] = {5, 10, 15, 20, 25};
    int tamanho = 5;

    exibir_todos(numeros, tamanho);

    return 0;
}
