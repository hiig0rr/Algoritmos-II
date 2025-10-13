/*Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X
e Y). Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles*/

#include <stdio.h>
#include <math.h> 
struct Ponto {
    float x;
    float y;
};

int main() {
    struct Ponto p1, p2;
    float distancia;

    printf("Digite as coordenadas do primeiro ponto (x y): ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Digite as coordenadas do segundo ponto (x y): ");
    scanf("%f %f", &p2.x, &p2.y);

    distancia = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));

    printf("\nA distancia entre os pontos (%.2f, %.2f) e (%.2f, %.2f) eh: %.2f\n",
           p1.x, p1.y, p2.x, p2.y, distancia);

    return 0;
}
