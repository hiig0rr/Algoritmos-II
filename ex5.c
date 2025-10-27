/*Faça um procedimento que recebe por parâmetro o tempo de duração de
uma fábrica expressa em segundos e imprima esse tempo em horas, minutos
e segundos.*/

#include <stdio.h>

void converterTempo(int totalSegundos) {
    int horas, minutos, segundos;

    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;

    printf("%d segundos equivalem a: %d hora(s), %d minuto(s) e %d segundo(s).\n",
           totalSegundos, horas, minutos, segundos);
}

int main() {
    int tempo;

    printf("Digite o tempo de duração em segundos: ");
    scanf("%d", &tempo);

    converterTempo(tempo);

    return 0;
}
