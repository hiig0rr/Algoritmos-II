/*Faça uma função que verifique se um valor é perfeito ou não. Um valor
é dito perfeito quando ele é igual a soma dos seus divisores excetuando ele
próprio. (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores). A função
deve retornar o valor inteiro 1 para verdadeiro e 0 caso contrário.*/

#include <stdio.h>

int ehPerfeito(int num) {
    int soma = 0;

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }

    if (soma == num)
        return 1;
    else
        return 0;
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (ehPerfeito(numero))
        printf("%d é um número perfeito.\n", numero);
    else
        printf("%d não é um número perfeito.\n", numero);

    return 0;
}
