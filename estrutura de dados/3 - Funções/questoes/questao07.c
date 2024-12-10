#include <stdio.h>

// Função que calcula a área de um triângulo
float calcular_area_triangulo(float base, float altura) {
    return (base * altura) / 2;
}

int main() {
    float base, altura;

    // Solicita ao usuário que insira a base e a altura do triângulo
    printf("Digite a base do triângulo: ");
    scanf("%f", &base);

    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura);

    // Calcula e exibe a área
    printf("A área do triângulo é: %.2f\n", calcular_area_triangulo(base, altura));

    return 0;
}
