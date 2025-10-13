/*Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do
atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os dados de cinco
atletas. Calcule e exiba os nomes do atleta mais alto e do mais velho.*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    char esporte[30];
    int idade;
    float altura;
} Atleta;

int compararIdade(int idade1, int idade2) {
    return (idade1 > idade2) ? 1 : (idade1 < idade2) ? -1 : 0;
}

int compararAltura(float altura1, float altura2) {
    return (altura1 > altura2) ? 1 : (altura1 < altura2) ? -1 : 0;
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

    int indice_mais_velho = 0, indice_mais_alto = 0;

    for(int i = 1; i < 5; i++) {
        if(compararIdade(atletas[i].idade, atletas[indice_mais_velho].idade) > 0)
            indice_mais_velho = i;
        if(compararAltura(atletas[i].altura, atletas[indice_mais_alto].altura) > 0)
            indice_mais_alto = i;
    }

    printf("Atleta mais velho: %s\n", atletas[indice_mais_velho].nome);
    printf("Atleta mais alto: %s\n", atletas[indice_mais_alto].nome);

    return 0;
}
