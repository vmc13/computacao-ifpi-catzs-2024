#include <stdio.h>

int soma_todos_elementos(int *v, int tam) {
    int soma = 0;
    for (int i = 0; i < tam; i++) {
        soma += v[i];
    }
    return soma;
}

int main() {
    int numeros[] = {4, 7, 1, 3, 9};
    int tamanho = 5;

    int soma = soma_todos_elementos(numeros, tamanho);
    printf("A soma de todos os elementos é: %d\n", soma);

    return 0;
}
