/*Faça um procedimento que recebe por parâmetro os valores necessário
para o cálculo da fórmula de báskara e imprima as suas raízes, caso seja
possível calcular.*/

#include <stdio.h>
#include <math.h>

void calcularBhaskara(float a, float b, float c) {
    float delta, x1, x2;

    delta = (b * b) - (4 * a * c);

    if (delta < 0) {
        printf("Nao existem raizes reais.\n");
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("As raizes são:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
}

int main() {
    float a, b, c;

    printf("Digite os valores de a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    calcularBhaskara(a, b, c);

    return 0;
}
