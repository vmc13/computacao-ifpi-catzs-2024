#include <stdio.h>

int main() {
    float salario, imposto, inss;

    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);

    if (salario > 2000) {
        imposto = salario * 0.15;
        inss = salario * 0.10;
    } else {
        imposto = 0;
        inss = salario * 0.07;
    }

    printf("Salário: R$ %.2f\n", salario);
    printf("Imposto de renda: R$ %.2f\n", imposto);
    printf("INSS: R$ %.2f\n", inss);

    return 0;
}
