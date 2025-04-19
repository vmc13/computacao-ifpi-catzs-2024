/*  crie um componente LED que possui um Pino e um Estado,
preencha os campos de seus componentes e exiba seus valores.*/
/* QUESTÃO 11 e 12 - STRUCT */

#include <stdio.h>

typedef struct {
    int pino;
    int estado;
} LED;

int main() {
    LED led1;

    led1.pino = 13;
    led1.estado = 1;

    printf("Pino do LED: %d\n", led1.pino);
    printf("Estado do LED: %s\n", led1.estado == 1 ? "ACESO" : "APAGADO");

    return 0;
}