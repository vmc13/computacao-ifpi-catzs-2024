#include <stdio.h>

// Questão 7: Cálculo de Imposto e Salário Final
void questao7() {
    float salario, imposto, salario_final;
    
    printf("Digite o salario: ");
    scanf("%f", &salario);
    
    imposto = salario * 0.10;
    salario_final = salario - imposto;
    
    printf("Salario: %.4f\n", salario);
    printf("Imposto: %.4f\n", imposto);
    printf("Salario Final: %.4f\n", salario_final);
}

int main() {
    questao7();
    
    return 0;
}
