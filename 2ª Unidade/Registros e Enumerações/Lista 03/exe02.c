#include <stdio.h>

typedef struct {

    char nome[30], endereco[30];
    int idade;
} Pessoa;

int main() {

    Pessoa pessoa;
    printf("Digite o nome, idade e endereço da pessoa: ");
    fgets(pessoa.nome, 30, stdin);
    scanf("%d", &pessoa.idade);
    getchar();
    fgets(pessoa.endereco, 30, stdin);

    return 0;
}