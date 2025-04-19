#include <stdio.h>

int encontrar_posicao(char str[], char c) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == c) {
            return i;
        }
        i++;
    }
    return -1;
}

int main() {
    char str[100], c;
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    printf("Digite um caractere para buscar: ");
    scanf(" %c", &c);

    int pos = encontrar_posicao(str, c);
    if (pos != -1) {
        printf("O caractere '%c' aparece na posição %d.\n", c, pos);
    } else {
        printf("O caractere '%c' não foi encontrado.\n", c);
    }

    return 0;
}
