#include <stdio.h>

// Questão 5: Conversão de Celsius para Fahrenheit e Kelvin
void questao5() {
    float celsius, fahrenheit, kelvin;
    
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = celsius * 1.8 + 32;
    kelvin = (fahrenheit + 459.67) / 1.8;
    
    printf("Celsius = %.6f\n", celsius);
    printf("Fahrenheit = %.6f\n", fahrenheit);
    printf("Kelvin = %.6f\n", kelvin);
}

int main() {
    questao5();
    
    return 0;
}
