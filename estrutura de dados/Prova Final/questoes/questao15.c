
/*  crie o tipo Retangulo, com altura e largura. Em seguida, crie uma
variável do tipo Retangulo e preencha seus campos. Por último, crie e execute uma
função calcular_area, que recebe um Retangulo e retorna a sua área. */
/* QUESTÃO 15 - STRUCT */

#include <stdio.h>

typedef struct {
    float largura, altura;
} Retangulo;

float calcular_area(Retangulo ret) {
    return ret.largura * ret.altura;
}


int main() {
    Retangulo re;
    
    printf("Largura do retângulo: ");
    scanf("%f", &re.largura);
    printf("Altura do retângulo: ");
    scanf("%f", &re.altura);
    
    float area = calcular_area(re);
    
    printf("A área do retângulo é: %.2f", area);
    
    return 0;
}