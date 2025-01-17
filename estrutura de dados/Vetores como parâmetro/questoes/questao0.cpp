#include <stdio.h>

void exibir_primeiro(int *v, int tam) {
    printf("%d \n", v[0]);
}

int main() {
    int numeros[] = {3, 2, 1};
    exibir_primeiro(numeros, 3);
    return 0;
}