#include <stdio.h>

int retornar_primeiro(int *v, int tam) {
    return v[0];
}

int main() {
    int numeros[] = {3, 2, 1};
    int valor = retornar_primeiro(numeros, 3);
    printf("%d\n", valor);
    return 0;
}
