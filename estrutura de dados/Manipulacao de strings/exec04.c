#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);

    printf("\nAntes da cópia:\n");
    printf("String 1: %s", str1);
    printf("String 2: %s", str2);

    strcpy(str1, str2);

    printf("\nDepois da cópia:\n");
    printf("String 1: %s", str1);
    printf("String 2: %s", str2);

    return 0;
}
