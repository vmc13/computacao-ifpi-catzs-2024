#include <stdio.h>

int main() {
    float media;
    float *pMedia = &media;

    printf("Digite a média do aluno: ");
    scanf("%f", pMedia);

    *pMedia += 1.0;
    printf("Média atualizada: %.2f\n", *pMedia);

    return 0;
}
