#include <stdio.h>

double calcularRetangulo(double comprimento, double largura, double *perimetro) {
    *perimetro = 2 * (comprimento + largura);
    return comprimento * largura;
}

int main() {
    double comprimento = 5.0, largura = 3.0, area, perimetro;

    area = calcularRetangulo(comprimento, largura, &perimetro);

    printf("Área: %.2lf\n", area);
    printf("Perímetro: %.2lf\n", perimetro);

    return 0;
}
