/* Crie e execute uma função que receba um vetor de números e o seu tamanho e
quantas vezes o número 4 aparece no vetor.*/
/* QUESTÃO 10 - STRUCT */

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[20];
    float media;
} Aluno;

void exibir_aluno(Aluno alunor) {
    printf("Nome: %s \n", alunor.nome);
    printf("Média: %.2f \n", alunor.media);
}

int main () {
    Aluno alunor;
    
    printf("Digite o nome do aluno: ");
    scanf("%19s", alunor.nome);
    
    printf("Digite a média do aluno: ");
    scanf("%f", &alunor.media);
    
    exibir_aluno(alunor);
    
    return 0;
}