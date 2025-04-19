#include <stdio.h>

typedef struct {
    char nome[50];
    float media;
} Aluno;

int main() {
    Aluno aluno;
    printf("Digite o nome do aluno: ");
    scanf("%49s", aluno.nome);
    printf("Digite a média do aluno: ");
    scanf("%f", &aluno.media);
    printf("Aluno\nNome: %s\nMédia: %.2f\n", aluno.nome, aluno.media);
    return 0;
}