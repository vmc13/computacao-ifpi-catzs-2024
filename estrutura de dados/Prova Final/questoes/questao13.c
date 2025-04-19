/*  Crie uma estrutura do tipo Funcionario que possui um nome e um salário. Depois disso
crie e execute uma função que receba (como argumento) um Funcionario e retorne o
valor que esse funcionário deve pagar de imposto. */
/* QUESTÃO 13 - STRUCT */

#include <stdio.h>

typedef struct {
    char nome[20];
    float salario;
} Funcionario;

float calcular_imposto(Funcionario func) {
    return (func.salario > 2000) ? func.salario * 0.1 : 0;
}

int main() {
    Funcionario func;

    printf("Nome do funcionário: ");
    scanf("%19s", func.nome);
    printf("Salário do funcionário: ");
    scanf("%f", &func.salario);
    
    float imposto = calcular_imposto(func);
    
    printf("Imposto: %.2f \nSalário líquido: %.2f", imposto, (func.salario - imposto));

    return 0;
}