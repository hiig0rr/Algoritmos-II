/*Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X
e Y). Em seguida, declare e leia do teclado um ponto e exiba a distância dele até a origem
das coordenadas, isto é, a posição (0,0).*/

#include <stdio.h>
#include <math.h> 

struct Ponto {
    float x;
    float y;
};

int main() {
    struct Ponto p;
    float distancia;

    printf("Digite a coordenada X: ");
    scanf("%f", &p.x);

    printf("Digite a coordenada Y: ");
    scanf("%f", &p.y);

    distancia = sqrt(pow(p.x, 2) + pow(p.y, 2));

    printf("\nA distancia do ponto (%.2f, %.2f) ate a origem eh: %.2f\n", p.x, p.y, distancia);

    return 0;
}
 