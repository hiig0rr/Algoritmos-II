 /*Escreva um programa que contenha uma estrutura representando uma data válida.
Essa estrutura deve conter os campos dia, mês e ano. Em seguida, leia duas datas e
armazene nessa estrutura. Calcule e exiba o número de dias que decorreram entre as duas
datas.*/

#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

int bissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

int contarDias(Data d) {
    int dias = d.ano * 365 + d.dia;

    int mesesDias[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    for(int i = 1; i < d.mes; i++) {
        dias += mesesDias[i];
    }

    dias += d.ano / 4 - d.ano / 100 + d.ano / 400;

    if(bissexto(d.ano) && d.mes > 2) {
        dias += 1;
    }

    return dias;
}

int main() {
    Data d1, d2;

    printf("Digite a primeira data (DD MM AAAA): ");
    scanf("%d %d %d", &d1.dia, &d1.mes, &d1.ano);

    printf("Digite a segunda data (DD MM AAAA): ");
    scanf("%d %d %d", &d2.dia, &d2.mes, &d2.ano);

    int dias1 = contarDias(d1);
    int dias2 = contarDias(d2);

    int diferenca = dias1 - dias2;
    if(diferenca < 0) diferenca = -diferenca;

    printf("Número de dias entre as duas datas: %d\n", diferenca);

    return 0;
}
