/* Questão 02*/

#include <stdio.h>
#include <math.h>

float calcular_distancia(float x1, float y1, float x2, float y2){
    return sqrt(pow(x2 - x1, 2)+ pow(y2 - y1, 2));
}

int main() {
    float x1, y1, x2, y2;
    printf("Digite as coordenadas x1 y1 x2 y2: ");
    scanf("%f %f %f %f",  &x1, &y1, &x2, &y2);
    
    float distancia = calcular_distancia(x1, y1, x2, y2);
    printf("Distância: %.2f\n", distancia);
  
    return 0;
}