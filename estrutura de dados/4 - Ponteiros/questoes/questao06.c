#include <stdio.h>

int main() {
    int a = 10, b = 0;
    int *pA = &a;

    b = *pA;

    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);

    return 0;
}
