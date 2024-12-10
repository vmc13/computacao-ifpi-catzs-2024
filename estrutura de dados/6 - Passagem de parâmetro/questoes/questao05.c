#include <stdio.h>
#include <math.h>

int calcularRaizes(double a, double b, double c, double *x1, double *x2) {
    double delta = b * b - 4 * a * c;

    if (delta < 0) {
        *x1 = *x2 = NAN;  // Sem raízes reais.
        return 0;         // Nenhuma raiz.
    } else if (delta == 0) {
        *x1 = *x2 = -b / (2 * a);
        return 1;         // Uma raiz.
    } else {
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
        return 2;         // Duas raízes.
    }
}

int main() {
    double a = 1, b = -5, c = 6, x1, x2;
    int numRaizes;

    numRaizes = calcularRaizes(a, b, c, &x1, &x2);

    printf("Número de raízes: %d\n", numRaizes);
    if (numRaizes > 0) {
        printf("Raiz 1: %.2lf\n", x1);
        if (numRaizes == 2) {
            printf("Raiz 2: %.2lf\n", x2);
        }
    }

    return 0;
}
