#include <stdio.h>

void questao1() {
    int idade;
    float salario;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu salario: ");
    scanf("%f", &salario);
    
    printf("Idade: %d\n", idade);
    printf("Salario: %.4f\n", salario);
}

int main() {
    questao1();

    return 0;
}
