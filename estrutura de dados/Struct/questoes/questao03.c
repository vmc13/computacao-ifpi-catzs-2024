#include <stdio.h>
#include <string.h>

typedef struct {
    char marca[50];
    char modelo[50];
    int ano;
} Carro;

int main() {
    Carro c1;
    strcpy(c1.marca, "Toyota");
    strcpy(c1.modelo, "Corolla");
    c1.ano = 2022;
    printf("Marca: %s\nModelo: %s\nAno: %d\n", c1.marca, c1.modelo, c1.ano);
    return 0;
}