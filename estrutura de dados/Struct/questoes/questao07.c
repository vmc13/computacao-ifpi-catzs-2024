#include <stdio.h>

typedef struct {
    char nome[50];
    float media;
} Aluno;

int main() {
    Aluno alunos[3];
    for(int i = 0; i < 3; i++) {
        printf("Digite o nome do %dº aluno: ", i+1);
        scanf("%49s", alunos[i].nome);
        printf("Digite a média do %dº aluno: ", i+1);
        scanf("%f", &alunos[i].media);
    }

    for(int i = 0; i < 3; i++) {
        printf("\nAluno: %s\nMédia: %.2f\n", alunos[i].nome, alunos[i].media);
        if(alunos[i].media >= 7.0) {
            printf("Situação: Aprovado\n");
        } else if(alunos[i].media >= 5.0) {
            printf("Situação: Prova Final\n");
        } else {
            printf("Situação: Reprovado\n");
        }
    }

    return 0;
}
