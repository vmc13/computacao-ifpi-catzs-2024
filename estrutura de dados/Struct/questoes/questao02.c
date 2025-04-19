#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    float altura;
} Pessoa;

int main() {
    Pessoa p2;
    printf("Digite o nome: ");
    scanf("%49s", p2.nome);
    printf("Digite a idade: ");
    scanf("%d", &p2.idade);
    printf("Digite a altura: ");
    scanf("%f", &p2.altura);
    printf("Nome: %s\nIdade: %d\nAltura: %.2f\n", p2.nome, p2.idade, p2.altura);
    return 0;
}