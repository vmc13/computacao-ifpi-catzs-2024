/* Crie e execute uma função uma função que receba 2 números e retorne o maior dos
números recebidos.*/

#include <stdio.h>

int maior_numero(int a, int b) {
    return (a > b) ? a : b;
}

int main () {
    int num1, num2;
    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);
    
    printf("O maior número é: %d \n", maior_numero(num1, num2));
    
    return 0;
}