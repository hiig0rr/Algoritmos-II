/*Usando a estrutura “atleta” do exercício anterior, escreva um programa que leia os
dados de cinco atletas e os exiba por ordem de idade, do mais velho para o mais novo.*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    char esporte[30];
    int idade;
    float altura;
} Atleta;

void trocar(Atleta *a, Atleta *b) {
    Atleta temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    Atleta atletas[5];

    for(int i = 0; i < 5; i++) {
        printf("Digite o nome do atleta %d: ", i + 1);
        fgets(atletas[i].nome, sizeof(atletas[i].nome), stdin);
        atletas[i].nome[strcspn(atletas[i].nome, "\n")] = '\0';

        printf("Digite o esporte do atleta: ");
        fgets(atletas[i].esporte, sizeof(atletas[i].esporte), stdin);
        atletas[i].esporte[strcspn(atletas[i].esporte, "\n")] = '\0';

        printf("Digite a idade do atleta: ");
        scanf("%d", &atletas[i].idade);

        printf("Digite a altura do atleta (em metros): ");
        scanf("%f", &atletas[i].altura);
        getchar();
        printf("\n");
    }

    for(int i = 0; i < 5 - 1; i++) {
        for(int j = 0; j < 5 - i - 1; j++) {
            if(atletas[j].idade < atletas[j + 1].idade) {
                trocar(&atletas[j], &atletas[j + 1]);
            }
        }
    }

    printf("Atletas por ordem de idade (mais velho para mais novo):\n");
    for(int i = 0; i < 5; i++) {
        printf("%d. %s | Esporte: %s | Idade: %d | Altura: %.2f m\n", 
               i + 1, atletas[i].nome, atletas[i].esporte, atletas[i].idade, atletas[i].altura);
    }

    return 0;
}
