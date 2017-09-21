#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarArquivo() {

    srand(time(NULL));
    int i, chave;
    char frase[30] = "Qualquer coisa";
    float valores[4];
    FILE *arquivo = fopen("arq", "wb");

    for(i = 0; i < 50; i++) {

        chave = i + 1;
        valores[0] = (rand() % 1000) / 10.0;
        valores[1] = (rand() % 1000) / 10.0;
        valores[2] = (rand() % 1000) / 10.0;
        valores[3] = (rand() % 1000) / 10.0;

        fwrite(&chave, sizeof(int), 1, arquivo);
        fwrite(frase, sizeof(char), 30, arquivo);
        fwrite(valores, sizeof(float), 4, arquivo);
    }

    fclose(arquivo);
}

int removeItem(FILE *arquivo, int chave) {

    int chaveArquivo, encontrou = 0, zero = 0;

    fread(&chaveArquivo, sizeof(int), 1, arquivo);
    while(!feof(arquivo)) {

        if(chaveArquivo == chave) {

            fseek(arquivo, (-1) * sizeof(int), SEEK_CUR);
            fwrite(&zero, sizeof(int), 1, arquivo);
            encontrou = 1;
            return encontrou;
        }

        fseek(arquivo, 30 * sizeof(char) + 4 * sizeof(float), SEEK_CUR);
        fread(&chaveArquivo, sizeof(int), 1, arquivo);
    }

    return encontrou;
}

void imprimirArquivo(FILE *arquivo) {

    int chave;
    char frase[30];
    float valores[4];

    fseek(arquivo, 0, SEEK_SET);

    printf("Chave\tFrase\t\t#1\t#2\t#3\t#4\n");
    while(!feof(arquivo)) {

        fread(&chave, sizeof(int), 1, arquivo);
        fread(frase, sizeof(char), 30, arquivo);
        fread(valores, sizeof(float), 4, arquivo);

        if(chave != 0) {
            printf("%d\t%s\t%.0f\t%.0f\t%.0f\t%.0f\n", chave, frase, valores[0], valores[1], valores[2], valores[3]);
        }
    }
}

int main() {

    FILE *arquivo = fopen("arq", "rb+");

    if(removeItem(arquivo, 44)) {
        imprimirArquivo(arquivo);
    }

    fclose(arquivo);

    return 0;
}