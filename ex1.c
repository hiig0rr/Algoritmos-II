/*Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da
estrutura lida.*/

#include <stdio.h>

struct Pessoa {
    char nome[100];
    int idade;
    char endereco[200];
};

int main() {
    struct Pessoa p;
    printf("Digite o nome: ");
    fgets(p.nome, sizeof(p.nome), stdin);

    printf("Digite a idade: ");
    scanf("%d", &p.idade);
    getchar();
    printf("Digite o endereco: ");
    fgets(p.endereco, sizeof(p.endereco), stdin);

    printf("\n--- Dados da Pessoa ---\n");
    printf("Nome: %s", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Endereco: %s", p.endereco);

    return 0;
}
