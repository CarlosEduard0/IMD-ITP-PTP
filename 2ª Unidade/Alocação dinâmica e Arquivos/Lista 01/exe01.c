#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

    char *nome;
    int pg, gm, gs, s, v, ga;
} Time;

typedef struct {

    Time *time1;
    Time *time2;
    int gols1;
    int gols2;
} Jogo;

typedef struct {

    int qntTimes;
    Time *times;
} Tabela;

Time *buscarPorTime(Tabela *tabela, char *time) {

    int i;

    for(i = 0; i < tabela->qntTimes; i++) {

        if(strcmp(tabela->times[i].nome, time) == 0) {
            return &tabela->times[i];
        }
    }
}

void carregarJogos(Tabela *tabela) {

    FILE *jogosArquivo = fopen("jogos.txt", "r");
    Jogo jogo;

    char temp[1000], *token;
    int i, j;

    while(!feof(jogosArquivo)) {

        fgets(temp, 1000, jogosArquivo);
        token = strtok(temp, " ");
        jogo.time1 = buscarPorTime(tabela, token);

        for(j = 0; j < 4; j++) {
            token = strtok(NULL, " ");
            switch(j) {
                case 0:
                    jogo.time2 = buscarPorTime(tabela, token);
                    break;
                case 1:
                    jogo.gols1 = atoi(token);
                    break;
                case 2:
                    jogo.gols2 = atoi(token);
                    break;
            }
        }

        jogo.time1->gm += jogo.gols1;
        jogo.time1->gs += jogo.gols2;
        jogo.time1->s = jogo.time1->gm - jogo.time1->gs;
        if(jogo.time1->gs != 0) {
            jogo.time1->ga = jogo.time1->gm / jogo.time1->gs;
        }

        jogo.time2->gm += jogo.gols2;
        jogo.time2->gs += jogo.gols1;
        jogo.time2->s = jogo.time2->gm - jogo.time2->gs;
        if(jogo.time2->gs != 0) {
            jogo.time2->ga = jogo.time2->gm / jogo.time2->gs;
        }

        if(jogo.gols1 > jogo.gols2) {

            jogo.time1->v += 1;
            jogo.time1->pg += 3;
        } else if(jogo.gols1 < jogo.gols2) {

            jogo.time2->v += 1;
            jogo.time2->pg += 3;
        } else {
            jogo.time1->pg += 1;
            jogo.time2->pg += 1;
        }
    }

    fclose(jogosArquivo);
}

Tabela carregarTabela() {

    FILE *timesArquivo = fopen("times.txt", "r");
    Tabela tabela;

    char temp[100];
    tabela.qntTimes = atoi(fgets(temp, 4, timesArquivo));
    tabela.times = malloc(tabela.qntTimes * sizeof(Time));
    int i;

    for(i = 0; i < tabela.qntTimes; i++) {

        fgets(temp, 100, timesArquivo);
        if(temp[strlen(temp) - 1] == '\n') {
            temp[strlen(temp) - 1] = 0;
        }
        tabela.times[i].nome = malloc(sizeof(char) * strlen(temp));
        strcpy(tabela.times[i].nome, temp);
    }

    fclose(timesArquivo);

    carregarJogos(&tabela);

    return tabela;
}

void ordernarTabela(Tabela *tabela) {

    Time aux;
    int i, j;

    for(i = 0; i < tabela->qntTimes; i++) {

        for(j = 0; j < tabela->qntTimes; j++) {

            if(tabela->times[i].pg > tabela->times[j].pg) {

                aux = tabela->times[i];
                tabela->times[i] = tabela->times[j];
                tabela->times[j] = aux;
            }
        }
    }
}

void imprimirTabela(Tabela *tabela) {

    ordernarTabela(tabela);

    int i;
    Time *times = tabela->times;

    printf("Classificação\tPG\tGM\tGS\tS\tV\tGA\n");
    for(i = 0; i < tabela->qntTimes; i++) {

        printf("%-10s\t%d\t%d\t%d\t%d\t%d\t%d\n", times[i].nome, times[i].pg, times[i].gm, times[i].gs, times[i].s, times[i].v, times[i].ga);
    }
}

int main() {

    Tabela tabela = carregarTabela();

    imprimirTabela(&tabela);

    return 0;
}