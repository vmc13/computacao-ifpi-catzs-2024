#include <stdio.h>

// Questão 6: Cálculo de Imposto sobre Salário (10%)
void questao6() {
    float salario, imposto;
    
    printf("Digite o salario: ");
    scanf("%f", &salario);
    
    imposto = salario * 0.10;
    
    printf("Salario: %.4f\n", salario);
    printf("Imposto: %.4f\n", imposto);
}

int main() {
    questao6();
    
    return 0;
}
