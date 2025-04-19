/* Crie e execute uma função que receba, como parâmetro, a massa e a altura de uma
pessoa e retorne o seu IMC.*/

#include <stdio.h>

float calcular_imc(float massa, float altura) {
    return massa / (altura*altura);
}

int main() {
    float massa, altura;
    printf("Digite a massa (kg): ");
    scanf("%f", &massa);
    printf("Digite a altura (m): ");
    scanf("%f", &altura);
    
    float imc = calcular_imc(massa, altura);
    
    printf("O IMC é: %.2f\n", imc);
    
    return 0;
}