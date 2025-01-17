#include <stdio.h>

int soma_primeiro_e_ultimo(int *v, int tam) {
    if (tam > 0) {
        return v[0] + v[tam - 1]; 
    } else {
        printf("Erro: O vetor está vazio.\n");
        return 0;
    }
}

int main() {
    int numeros[] = {5, 10, 15, 20, 25};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    int soma = soma_primeiro_e_ultimo(numeros, tamanho);
    printf("A soma do primeiro e do último elemento é: %d\n", soma);

    return 0;
}
