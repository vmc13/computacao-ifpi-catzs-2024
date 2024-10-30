#include <stdio.h>

// Questão 3: Área e Perímetro de um Retângulo
void questao3() {
    float altura, largura, area, perimetro;
    
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);
    printf("Digite a largura do retangulo: ");
    scanf("%f", &largura);
    
    area = altura * largura;
    perimetro = 2 * (altura + largura);
    
    printf("Area = %.6f\n", area);
    printf("Perimetro = %.6f\n", perimetro);
}

int main() {
    questao3();
    
    return 0;
}
