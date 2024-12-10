#include <stdio.h>

int main() {
    float n1, n2, n3, n4, media;

    printf("Digite as quatro notas do aluno:\n");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    printf("Média: %.1f\n", media);
    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (media < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
    }

    return 0;
}
