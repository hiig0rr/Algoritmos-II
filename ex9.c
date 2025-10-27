/*Faça uma função que recebe um valor inteiro e verifica se o valor é
positivo ou negativo. A função deve retornar um valor inteiro.*/

#include <stdio.h>

int verificaSinal(int num) {
    if (num > 0)
        return 1;   // positivo
    else if (num < 0)
        return -1;  // negativo
    else
        return 0;   // zero
}

int main() {
    int valor, resultado;

    printf("Digite um número inteiro: ");
    scanf("%d", &valor);

    resultado = verificaSinal(valor);

    if (resultado == 1)
        printf("O número é positivo.\n");
    else if (resultado == -1)
        printf("O número é negativo.\n");
    else
        printf("O número é zero.\n");

    return 0;
}
