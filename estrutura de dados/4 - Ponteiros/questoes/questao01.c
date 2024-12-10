#include <stdio.h>

int main() {
    float salario;

    printf("Digite o salário: ");
    scanf("%f", &salario);

    printf("Salário: %.2f\n", salario);
    printf("Endereço da variável: %p\n", (void*)&salario);

    return 0;
}
