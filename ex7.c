/*Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos hora,
minuto e segundo. Agora, escreva um*/

#include <stdio.h>

    int hora;
    int minuto;
    int segundo;

struct Hora;
int main() {

    printf("Digite a hora (hh mm ss): ");
    scanf("%d %d %d", &hora, &minuto, &segundo);

    printf("Horário digitado: %02d:%02d:%02d\n", hora, minuto, segundo);

    return 0;
}
