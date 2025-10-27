/*Faça uma função que receba um texto por parâmetro e escreva-o na tela (print), em seguida retorne “Ok”*/

#include <stdio.h>

const char* escreverTexto(char texto[]) {
    printf("%s\n", texto);
    return "Ok";
}

int main() {
    const char* resultado = escreverTexto("tabom?");
    printf("Retorno da função: %s\n", resultado);
    return 0;
}
