/*Faça uma função que receba um texto por parâmetro e escreva-o na tela (printf)*/

#include <stdio.h>

void escreverTexto(char texto[]) {
    printf("%s\n", texto);
}

int main() {
    escreverTexto("o higor eh belissimo");
    escreverTexto("verdade");
    return 0;
}
