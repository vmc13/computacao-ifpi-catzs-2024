#include <stdio.h>

void exibir_primeiro_e_ultimo(int *v, int tam) {
    if (tam > 0) {
        printf("1° elemento: %d\n", v[0]);
        printf("Último elemento: %d\n", v[tam - 1]);
    } else {
        printf("O vetor está vazio.\n");
    }
}

int main() {
    int numeros[] = {10, 20, 30, 40, 50};
    // int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    // sizeof retorna o tamanho em bytes
    // sizeof int = 4 bytes - 4 bytes * 5 elementos = 20 bytes / 4 = 5 números
    int tamanho = 5;

    exibir_primeiro_e_ultimo(numeros, tamanho);

    return 0;
}
