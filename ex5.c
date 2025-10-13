/* Usando a estrutura Retângulo do exercício anterior, faça um programa que declare e
leia uma estrutura Retângulo e um Ponto, e informe se esse ponto está ou não dentro do
retângulo.*/

#include <stdio.h>

struct Ponto {
    float x;
    float y;
};

struct Retangulo {
    struct Ponto superior_esquerdo;
    struct Ponto inferior_direito;
};

int main() {
    struct Retangulo r;
    struct Ponto p;

    printf("Digite as coordenadas do ponto superior esquerdo (x y): ");
    scanf("%f %f", &r.superior_esquerdo.x, &r.superior_esquerdo.y);

    printf("Digite as coordenadas do ponto inferior direito (x y): ");
    scanf("%f %f", &r.inferior_direito.x, &r.inferior_direito.y);

    printf("Digite as coordenadas do ponto a testar (x y): ");
    scanf("%f %f", &p.x, &p.y);

    if (
        p.x >= r.superior_esquerdo.x && 
        p.x <= r.inferior_direito.x && 
        p.y <= r.superior_esquerdo.y && 
        p.y >= r.inferior_direito.y
    ) {
        printf("\nO ponto (%.2f, %.2f) esta DENTRO do retangulo.\n", p.x, p.y);
    } else {
        printf("\nO ponto (%.2f, %.2f) esta FORA do retangulo.\n", p.x, p.y);
    }

    return 0;
}
