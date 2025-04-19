#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[100];

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);

    // Removendo o '\n' do final das strings, se presente
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    strcat(str1, str2);

    printf("String concatenada: %s\n", str1);

    return 0;
}
