/*Faça uma função que recebe a idade de uma pessoa em anos, meses e dias
e retorna essa idade expressa em dias.*/

#include <stdio.h>

int idadeEmDias(int anos, int meses, int dias) {
    int totalDias;
    totalDias = (anos * 365) + (meses * 30) + dias;
    return totalDias;
}

int main() {
    int anos, meses, dias;
    int total;

    printf("Digite sua idade em anos, meses e dias: ");
    scanf("%d %d %d", &anos, &meses, &dias);

    total = idadeEmDias(anos, meses, dias);

    printf("Sua idade em dias é: %d dias\n", total);

    return 0;
}
