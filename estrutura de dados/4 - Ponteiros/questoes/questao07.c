#include <stdio.h>

int main() {
    float nota1, nota2, temp;
    float *pNota1 = &nota1, *pNota2 = &nota2;

    printf("Digite a nota do aluno 1: ");
    scanf("%f", pNota1);

    printf("Digite a nota do aluno 2: ");
    scanf("%f", pNota2);

    // Troca dos valores
    temp = *pNota1;
    *pNota1 = *pNota2;
    *pNota2 = temp;

    printf("Após a troca:\n");
    printf("Nota do aluno 1: %.2f\n", *pNota1);
    printf("Nota do aluno 2: %.2f\n", *pNota2);

    return 0;
}
