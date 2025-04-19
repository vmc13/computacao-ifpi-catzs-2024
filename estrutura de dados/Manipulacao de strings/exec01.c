#include <stdio.h>

int string_length(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    if (str[string_length(str) - 1] == '\n') {
        str[string_length(str) - 1] = '\0';
    }

    printf("O comprimento da string é: %d\n", string_length(str));
    return 0;
}
