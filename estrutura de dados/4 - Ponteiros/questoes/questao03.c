#include <stdio.h>

int main() {
    float altura, largura, area;
    float *pAltura = &altura, *pLargura = &largura;

    printf("Digite a altura do retângulo: ");
    scanf("%f", pAltura);

    printf("Digite a largura do retângulo: ");
    scanf("%f", pLargura);

    area = (*pAltura) * (*pLargura);
    printf("Área do retângulo: %.2f\n", area);

    return 0;
}
