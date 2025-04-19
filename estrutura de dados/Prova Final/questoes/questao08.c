/* Crie e execute uma função que receba um vetor de números e o seu tamanho e
retorna 1 caso o vetor possua o número 10 e 0 caso contrário.*/
/* QUESTÃO 08 */

#include <stdio.h>

int contem_10(int *vetor, int tam) {
    for (int i = 0; i<tam; i++) {
        if (vetor[i] == 10)
            return 1;
    }
    return 0;
}

int main () {
    int vetor[10] = {0, 1, 2, 3, 4, 9, 8, 7, 6, 5};
    printf("%d \n", contem_10(vetor, 10));
    
	return 0;
}