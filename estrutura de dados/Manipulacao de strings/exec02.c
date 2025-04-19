#include <stdio.h>

int contar_a(char str[]) {
    int count = 0, i = 0;
    while (str[i] != '\0') {
        if (str[i] == 'a' || str[i] == 'A') {
            count++;
        }
        i++;
    }
    return count;
}

int main() {
    char str[100];
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    printf("A letra 'a' aparece %d vezes.\n", contar_a(str));
    return 0;
}
