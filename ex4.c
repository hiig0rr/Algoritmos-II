/*Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto superior
esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido por uma estrutura
Ponto, a qual contém as posições X e Y. Faça um programa que declare e leia uma
estrutura Retângulo e exiba a área e o comprimento da diagonal e o perímetro desse
retângulo.*/

#include <stdio.h>
#include <math.h>
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
    float largura, altura, area, diagonal, perimetro;

    printf("Digite as coordenadas do ponto superior esquerdo (x y): ");
    scanf("%f %f", &r.superior_esquerdo.x, &r.superior_esquerdo.y);

    printf("Digite as coordenadas do ponto inferior direito (x y): ");
    scanf("%f %f", &r.inferior_direito.x, &r.inferior_direito.y);

    largura = fabs(r.inferior_direito.x - r.superior_esquerdo.x); 
    altura = fabs(r.superior_esquerdo.y - r.inferior_direito.y);  
    area = largura * altura;
    diagonal = sqrt(pow(largura, 2) + pow(altura, 2));
    perimetro = 2 * (largura + altura);

    printf("\n=== RESULTADOS ===\n");
    printf("Largura: %.2f\n", largura);
    printf("Altura: %.2f\n", altura);
    printf("Area: %.2f\n", area);
    printf("Diagonal: %.2f\n", diagonal);
    printf("Perimetro: %.2f\n", perimetro);

    return 0;
}


