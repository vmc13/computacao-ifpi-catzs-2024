#include <stdio.h>
#include <math.h>

void calcularRaizes(double a, double b, double c, double *x1, double *x2) {
    double delta = b * b - 4 * a * c;

    if (delta >= 0) {
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
    } else {
        *x1 = *x2 = NAN;  // Sem raízes reais.
    }
}

int main() {
    double a = 1, b = -5, c = 6, x1, x2;

    calcularRaizes(a, b, c, &x1, &x2);

    printf("Raiz 1: %.2lf\n", x1);
    printf("Raiz 2: %.2lf\n", x2);

    return 0;
}
