#include <stdio.h>

void gerarArquivo() {

    int i;
    FILE *arquivo = fopen("numeros.bin", "wb");

    for(i = 1; i <= 50; i++) {

        fwrite(&i, sizeof(int), 1, arquivo);
    }

    fclose(arquivo);
}

void imprimirArquivo(FILE *arquivo) {

    int numero;

    fread(&numero, sizeof(int), 1, arquivo);
    while(!feof(arquivo)) {

        printf("%d ", numero);
        fread(&numero, sizeof(int), 1, arquivo);
    }
    printf("\n");
}

int main() {

    gerarArquivo();

    int numero;
    FILE *numeros = fopen("numeros.bin", "rb");
    FILE *pares = fopen("pares.bin", "wb+");

    fread(&numero, sizeof(int), 1, numeros);
    while(!feof(numeros)) {

        if(numero % 2 == 0) {
            fwrite(&numero, sizeof(int), 1, pares);
        }
        fread(&numero, sizeof(int), 1, numeros);
    }

    fseek(numeros, 0, SEEK_SET);
    fseek(pares, 0, SEEK_SET);
    imprimirArquivo(numeros);
    imprimirArquivo(pares);

    fclose(numeros);
    fclose(pares);

    return 0;
}