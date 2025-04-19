#include <stdio.h>
#include <string.h>

typedef struct {
    char marca[50];
    char modelo[50];
    int ano;
} Carro;

int main() {
    Carro c2;
    printf("Digite a marca: ");
    scanf("%49s", c2.marca);
    printf("Digite o modelo: ");
    scanf("%49s", c2.modelo);
    printf("Digite o ano: ");
    scanf("%d", &c2.ano);
    printf("Marca: %s\nModelo: %s\nAno: %d\n", c2.marca, c2.modelo, c2.ano);
    return 0;
}