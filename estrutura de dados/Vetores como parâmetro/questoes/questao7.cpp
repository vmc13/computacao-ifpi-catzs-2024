#include <stdio.h>

int verificar_primeiro_igual_ultimo(int *v, int tam) {
    if (tam > 0) {
        if (v[0] == v[tam - 1]) {
            return 0;
        } else {
            return 1;
        }
    } else {
        printf("Erro: O vetor está vazio.\n");
        return -1;
    }
}

int main() {
    int numeros[] = {5, 10, 15, 20, 5};
    int tamanho = 5;

    int resultado = verificar_primeiro_igual_ultimo(numeros, tamanho);

    if (resultado == 0) {
        printf("O primeiro elemento é igual ao último.\n");
    } else if (resultado == 1) {
        printf("O primeiro elemento é diferente do último.\n");
    }

    return 0;
}
