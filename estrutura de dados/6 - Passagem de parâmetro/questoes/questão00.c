#include <stdio.h>

void calcularSomaSubtracao(int a, int b, int *soma, int *subtracao) {
    *soma = a + b;
    *subtracao = a - b;
}

int main() {
    int num1 = 10, num2 = 5, soma, subtracao;

    calcularSomaSubtracao(num1, num2, &soma, &subtracao);

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);

    return 0;
}
