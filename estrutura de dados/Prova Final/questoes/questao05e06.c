/* Criar e exibir vetor*/
/* QUESTÃO 05 */

#include <stdio.h>

void exibir_vetor(int *vetor, int tam) {
    for (int i = 0; i < tam; i++) {
        printf("%d \n", vetor[i]);
    }
    // printf("\n");
}

int main () {
    int vetor[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    exibir_vetor(vetor, 10);
	
	return 0;
}