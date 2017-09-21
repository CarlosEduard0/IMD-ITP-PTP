#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarArquivo() {

    srand(time(NULL));
    int i, idade;
    char sexo, fumante;
    FILE *arquivo = fopen("resposta.bin", "wb");

    for(i = 0; i < 50; i++) {

        sexo = (rand() % 100 > 49) ? 'M' : 'F';
        idade = rand() % 100;
        fumante = (rand() % 100 > 49) ? 'S' : 'N';

        fwrite(&sexo, sizeof(char), 1, arquivo);
        fwrite(&idade, sizeof(int), 1, arquivo);
        fwrite(&fumante, sizeof(char), 1, arquivo);
    }

    fclose(arquivo);
}

int main() {

    int i, idade, fumantes = 0;
    int homens = 0, homensNaoFumantes = 0;
    int mulheres = 0, mulheresFumantes = 0;
    char sexo, fumante;
    FILE *arquivo = fopen("resposta.bin", "rb");

    for(i = 0; i < 50; i++) {

        fread(&sexo, sizeof(char), 1, arquivo);
        fread(&idade, sizeof(int), 1, arquivo);
        fread(&fumante, sizeof(char), 1, arquivo);

        if(fumante == 'S') {
            fumantes++;
        }
        if(sexo == 'M') {
            if(idade < 40 && fumante == 'N') {
                homensNaoFumantes++;
            }
            homens++;
        } else {
            if(idade > 40 && fumante == 'S') {
                mulheresFumantes++;
            }
            mulheres++;
        }
    }

    printf("Fumantes em relação ao total de pessoas entrevistadas: %.2f%%\n", ((float) fumantes / i) * 100);
    printf("Homens não fumantes abaixo de 40 anos em relação ao total de homens: %.2f%%\n", ((float) homensNaoFumantes / homens) * 100);
    printf("Mulheres fumantes acima de 40 anos em relação ao total de mulheres: %.2f%%\n", ((float) mulheresFumantes / mulheres) * 100);

    fclose(arquivo);

    return 0;
}