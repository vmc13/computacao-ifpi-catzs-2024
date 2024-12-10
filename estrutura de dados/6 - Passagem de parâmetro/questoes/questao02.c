#include <stdio.h>

void modificarValores(int *a, int *b) {
    (*a)--;
    (*b)++;
}

int main() {
    int a = 10, b = 20;

    modificarValores(&a, &b);

    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);

    return 0;
}
