#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14
#endif

void calcularCircunferencia(double raio, double *area, double *comprimento) {
    *area = M_PI * raio * raio;
    *comprimento = 2 * M_PI * raio;
}

int main() {
    double raio = 3.0, area, comprimento;

    calcularCircunferencia(raio, &area, &comprimento);

    printf("Área: %.2lf\n", area);
    printf("Comprimento: %.2lf\n", comprimento);

    return 0;
}
