#include <stdio.h>

void soma_primeiro_e_ultimo(int *v, int tam) {
    if (tam > 0) {
        int soma = v[0] + v[tam - 1];
        printf("Soma dos elementos: %d\n", soma);
    } else {
        printf("O vetor está vazio.\n");
    }
}

int main() {
    int numeros[] = {10, 20, 30, 40, 50};
    // int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    // sizeof retorna o tamanho em bytes
    // sizeof int = 4 bytes - 4 bytes * 5 elementos = 20 bytes / 4 = 5 elementos
    int tamanho = 5;

    soma_primeiro_e_ultimo(numeros, tamanho);

    return 0;
}
