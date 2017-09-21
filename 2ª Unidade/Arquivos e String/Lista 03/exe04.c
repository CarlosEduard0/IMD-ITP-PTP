#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarArquivo() {

    srand(time(NULL));
    int i, voto;
    FILE *arquivo = fopen("votos.txt", "w");

    for(i = 0; i < 99; i++) {

        voto = (rand() % 10 > 7) ? rand() % 10 : rand() % 5 + 1;
        fprintf(arquivo, "%d\n", voto);
    }
    fprintf(arquivo, "%d", voto);

    fclose(arquivo);
}

int main() {

    gerarArquivo();

    int voto;
    int maiorQntVotos, menorQntVotos;
    int maisVotado, menosVotado;
    int i, votos[6][2] = {{1, 0}, {2, 0}, {3, 0}, {4, 0}, {5, 0}, {6, 0}};
    FILE *arquivo = fopen("votos.txt", "r");

    for(i = 0; i < 100; i++) {

        fscanf(arquivo, "%d", &voto);
        switch(voto) {
            case 1:
                votos[0][1]++;
                break;
            case 2:
                votos[1][1]++;
                break;
            case 3:
                votos[2][1]++;
                break;
            case 4:
                votos[3][1]++;
                break;
            case 5:
                votos[4][1]++;
                break;
            default:
                votos[5][1]++;
        }
    }

    maisVotado = 0;
    menosVotado = 0;
    maiorQntVotos = votos[maisVotado][1];
    menorQntVotos = votos[menosVotado][1];
    for(i = 0; i < 6; i++) {
        
        if(i == 5) {
            break;
        }
        if(votos[i][1] > maiorQntVotos) {
            maisVotado = i;
            maiorQntVotos = votos[maisVotado][1];
        }
        if(votos[i][1] < menorQntVotos) {
            menosVotado = i;
            menorQntVotos = votos[menosVotado][1];
        }
    }

    fclose(arquivo);

    printf("Código\tQuantidade\n");
    printf("%d\t%d\n", maisVotado + 1, maiorQntVotos);
    printf("%d\t%d\n", menosVotado + 1, menorQntVotos);
    printf("Votos nulos: %d\n", votos[5][1]);

    return 0;
}