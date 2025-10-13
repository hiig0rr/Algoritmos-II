/*Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma pessoa.
Agora, escreva um programa que leia os dados de seis pessoas. Calcule e exiba os nomes
da pessoa mais nova e da mais velha.*/

#include <stdio.h>
#include <string.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char nome[50];
    Data nascimento;
} Pessoa;

int compararData(Data d1, Data d2) {
    if(d1.ano != d2.ano) return (d1.ano < d2.ano) ? -1 : 1;
    if(d1.mes != d2.mes) return (d1.mes < d2.mes) ? -1 : 1;
    if(d1.dia != d2.dia) return (d1.dia < d2.dia) ? -1 : 1;
    return 0;
}

int main() {
    Pessoa pessoas[6];

    for(int i = 0; i < 6; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0'; 

        printf("Digite a data de nascimento (DD MM AAAA): ");
        scanf("%d %d %d", &pessoas[i].nascimento.dia, 
                          &pessoas[i].nascimento.mes, 
                          &pessoas[i].nascimento.ano);
        getchar();
    }

    int indice_mais_velha = 0, indice_mais_nova = 0;

    for(int i = 1; i < 6; i++) {
        if(compararData(pessoas[i].nascimento, pessoas[indice_mais_velha].nascimento) < 0)
            indice_mais_velha = i;
        if(compararData(pessoas[i].nascimento, pessoas[indice_mais_nova].nascimento) > 0)
            indice_mais_nova = i;
    }

    printf("\nPessoa mais velha: %s\n", pessoas[indice_mais_velha].nome);
    printf("Pessoa mais nova: %s\n", pessoas[indice_mais_nova].nome);

    return 0;
}
