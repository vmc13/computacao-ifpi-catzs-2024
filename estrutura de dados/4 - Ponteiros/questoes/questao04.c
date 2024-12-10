#include <stdio.h>

int main() {
    float salario;
    float *pSalario = &salario;

    printf("Digite o salário: ");
    scanf("%f", pSalario);

    *pSalario *= 1.10;
    printf("Salário atualizado: %.2f\n", *pSalario);

    return 0;
}
