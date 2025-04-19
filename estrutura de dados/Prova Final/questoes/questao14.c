/*  crie um programa que possua a estrutura Pessoa, com peso, altura e nome.
Depois disso crie uma variável do tipo pessoa e preencha os seus campos.
Por último, crie uma função calcular_imc, que recebe (como argumento)
uma pessoa e retorna o seu IMC. */
/* QUESTÃO 14 - STRUCT */

#include <stdio.h>

typedef struct {
    char nome[20];
    float peso, altura;
} Pessoa;

float calcular_imc(Pessoa pe) {
    return pe.peso / (pe.altura * pe.altura);
}


int main() {
    Pessoa pe;
    
    printf("Nome da Pessoa: ");
    scanf("%19s", pe.nome);
    printf("Peso da pessoa: ");
    scanf("%f", &pe.peso);
    printf("Altura da pessoa: ");
    scanf("%f", &pe.altura);
    
    float imc = calcular_imc(pe);
    
    printf("O IMC de %s é: %.2f", pe.nome, imc);
    
    return 0;
}