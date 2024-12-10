#include <stdio.h>

int main() {
    float altura, base, area;
    float *pAltura = &altura, *pBase = &base;

    printf("Digite a altura do triângulo: ");
    scanf("%f", pAltura);

    printf("Digite a base do triângulo: ");
    scanf("%f", pBase);

    area = (*pAltura * *pBase) / 2;
    printf("Área do triângulo: %.2f\n", area);

    return 0;
}
