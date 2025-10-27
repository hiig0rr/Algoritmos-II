/*Escreva uma função que recebe, por parâmetro, dois valores X e Z e
calcula e retorna Xz . (sem utilizar funções ou operadores de potência prontos)*/

#include <stdio.h>

double potencia(double x, int z) {
    double resultado = 1;
    
    for (int i = 0; i < z; i++) {
        resultado *= x;
    }

    return resultado;
}

int main() {
    double x;
    int z;

    printf("Digite o valor de X: ");
    scanf("%lf", &x);

    printf("Digite o valor de Z (inteiro não negativo): ");
    scanf("%d", &z);

    if (z < 0) {
        printf("Expoente negativo não suportado nesta versão.\n");
    } else {
        printf("%.2lf elevado a %d é: %.2lf\n", x, z, potencia(x, z));
    }

    return 0;
}
