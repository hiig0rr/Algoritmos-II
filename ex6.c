/*Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve
conter o número de matrícula do aluno, seu nome e as notas de três provas. Agora, escreva
um programa que leia os dados de cinco alunos e os armazene nessa estrutura. Em
seguida, exiba o nome e as notas do aluno que possui a maior média geral dentre os cinco.*/

#include <stdio.h>

struct Aluno {
    int matricula;
    char nome[50];
    float notas[3];
};

int main() {
    struct Aluno alunos[5];
    float media, maior_media = 0;
    int i, j, indice_maior = 0;

    for (i = 0; i < 5; i++) {
        printf("\n=== Aluno %d ===\n", i + 1);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        getchar();
        printf("Nome: ");
        fgets(alunos[i].nome, 50, stdin);

        for (j = 0; alunos[i].nome[j] != '\0'; j++) {
            if (alunos[i].nome[j] == '\n') {
                alunos[i].nome[j] = '\0';
                break;
            }
        }

        printf("Digite as 3 notas: ");
        for (j = 0; j < 3; j++) {
            scanf("%f", &alunos[i].notas[j]);
        }

        media = (alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2]) / 3;

        if (media > maior_media) {
            maior_media = media;
            indice_maior = i;
        }
    }

    printf("\n=== Aluno com a maior média geral ===\n");
    printf("Nome: %s\n", alunos[indice_maior].nome);
    printf("Matrícula: %d\n", alunos[indice_maior].matricula);
    printf("Notas: %.2f, %.2f, %.2f\n",
           alunos[indice_maior].notas[0],
           alunos[indice_maior].notas[1],
           alunos[indice_maior].notas[2]);
    printf("Média geral: %.2f\n", maior_media);

    return 0;
}

