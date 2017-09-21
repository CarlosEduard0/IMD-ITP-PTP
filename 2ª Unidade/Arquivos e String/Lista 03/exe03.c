#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarArquivo() {

    srand(time(NULL));
    int i;
    FILE *arquivo = fopen("temperat.txt", "w");

    for(i = 0; i < 120; i++) {
        fprintf(arquivo, "%.1f\n", ((float) (rand() % 243)) / 10 + 15.5);
    }
    fprintf(arquivo, "%.1f", ((float) (rand() % 243)) / 10 + 15.5);

    fclose(arquivo);
}

int main() {

    int i, diasInferior = 0, diasSuperior = 0;
    float temperatura[121], maior = 0, menor = 100, soma = 0, media;
    FILE *arquivo = fopen("temperat.txt", "r");

    for(i = 0; i < 121; i++) {

        fscanf(arquivo, "%f", &temperatura[i]);
        if(temperatura[i] > maior) {
            maior = temperatura[i];
        }
        if(temperatura[i] < menor) {
            menor = temperatura[i];
        }
        soma += temperatura[i];
    }

    media = soma / 121;

    for(i = 0; i < 121; i++) {
        if(temperatura[i] < media) {
            diasInferior++;
        } else if(temperatura[i] > media) {
            diasSuperior++;
        }
    }

    fclose(arquivo);

    printf("Maior temperatura: %.1f\n", maior);
    printf("Menor temperatura: %.1f\n", menor);
    printf("Temperatura média: %.1f\n", media);
    printf("Dias onde a temperatura foi abaixo da média: %d\n", diasInferior);
    printf("Dias onde a temperatura foi acima da média: %d\n", diasSuperior);

    return 0;
}