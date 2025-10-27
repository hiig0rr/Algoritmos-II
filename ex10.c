/*Faça uma função que recebe um valor inteiro e verifica se o valor é par
ou ímpar. A função deve retornar um valor inteiro.*/

#include <stdio.h>

int verificaParImpar(int num) {
    if (num % 2 == 0)
        return 1;   // Par
    else
        return 0;   // Ímpar
}

int main() {
    int valor, resultado;

    printf("Digite um número inteiro: ");
    scanf("%d", &valor);

    resultado = verificaParImpar(valor);

    if (resultado == 1)
        printf("O número %d é par.\n", valor);
    else
        printf("O número %d é ímpar.\n", valor);

    return 0;
}
