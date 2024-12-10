#include <stdio.h>

// Questão 4: Área e Comprimento de um Círculo
void questao4() {
    float raio, area, comprimento;
    const float PI = 3.14;
    
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    
    area = PI * raio * raio;
    comprimento = 2 * PI * raio;
    
    printf("Area = %.2f\n", area);
    printf("Comprimento = %.2f\n", comprimento);
}

int main() {
    questao4();
    
    return 0;
}
