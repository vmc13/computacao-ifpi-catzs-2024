/* Criar e exibir vetor*/
/* QUESTÃO 07 */

#include <stdio.h>

int soma_extremos(int *vetor, int tam) {
    return vetor[0] + vetor[tam - 1];
}

int main () {
    int vetor[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    printf("Soma dos extremos: %d \n", soma_extremos(vetor, 10));
    
	return 0;
}