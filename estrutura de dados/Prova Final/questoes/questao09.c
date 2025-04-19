/* Crie e execute uma função que receba um vetor de números e o seu tamanho e
quantas vezes o número 4 aparece no vetor.*/
/* QUESTÃO 09 */

#include <stdio.h>

int contar_4(int *vetor, int tam) {
    int count = 0;
    for(int i = 0; i < tam; i++) {
        if (vetor[i] == 4)
            count++;
    }
    return count;
}

int main () {
    int vetor[10] = {4, 1, 2, 3, 4, 9, 8, 7, 4, 5};
    
    printf("O número 4 aparece %d vezes. \n", contar_4(vetor, 10));
    
	return 0;
}