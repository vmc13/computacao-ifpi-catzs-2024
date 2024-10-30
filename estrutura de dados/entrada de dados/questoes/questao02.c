#include <stdio.h>

// Questão 2: Área de um Triângulo
void questao2() {
    float altura, base, area;
    
    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);
    printf("Digite a base do triangulo: ");
    scanf("%f", &base);
    
    area = (altura * base) / 2;
    
    printf("Area = %.6f\n", area);
}

int main() {
    questao2();
    
    return 0;
}
