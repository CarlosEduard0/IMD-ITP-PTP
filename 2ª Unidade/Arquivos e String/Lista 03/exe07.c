#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarArquivo() {

    srand(time(NULL));
    int i;
    char nome[30] = "Nome qualquer Nome qualquerrrr", sexo, corOlhos;
    float altura, peso;
    FILE *arquivo = fopen("dados.txt", "w");

    for(i = 0; i < 50; i++) {

        sexo = (rand() % 2 == 0) ? 'M' : 'F';
        corOlhos = (rand() % 2 == 0) ? ((rand() % 2 == 0) ? 'A' : 'B') : ((rand() % 2 == 0) ? 'C' : 'D');
        altura = (rand() % 1000) / 10.0;
        peso = (rand() % 1000) / 10.0;

        fprintf(arquivo, "%s%c%c%05.2f %05.2f\n", nome, sexo, corOlhos, altura, peso);
    }

    fclose(arquivo);
}

int main() {

    gerarArquivo();

    char linha[44];
    FILE *dados = fopen("dados.txt", "r");
    FILE *homens = fopen("homens.txt", "w");
    FILE *mulheres = fopen("mulheres.txt", "w");

    fgets(linha, 44, dados);
    while(!feof(dados)) {//Não é o ideal

        if(linha[30] == 'M') {
            fputs(linha, homens);
        } else {
            fputs(linha, mulheres);
        }
        fgets(linha, 44, dados);
    }

    fclose(dados);
    fclose(homens);
    fclose(mulheres);

    return 0;
}