#include <stdio.h>

int main() {

    struct pessoa {

        char nome[30];
        char rua[30];
        int numero;
        char bairro[30];
        char enderecoCompl[30];
        int cep[30];
        char cidade[30];
        char uf[2];
        char telefone1[21], telefone2[12], telefone3[12];
    };

    return 0;
}