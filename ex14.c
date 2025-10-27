/*Faça uma função que leia um número não determinado de valores
positivos e retorna a média aritmética dos mesmos.*/

#include <stdio.h>

float calcularMedia() {
    float valor, soma = 0;
    int count = 0;

    printf("Digite números positivos (ou um número negativo para parar):\n");

    while (1) {
        scanf("%f", &valor);
        if (valor < 0) {
            break;
        }
        soma += valor;
        count++;
    }

    if (count == 0) {
        return 0;
    }

    return soma / count;
}

int main() {
    float media;

    media = calcularMedia();

    if (media > 0)
        printf("A média aritmética dos valores digitados é: %.2f\n", media);
    else
        printf("Nenhum valor positivo foi digitado.\n");

    return 0;
}
