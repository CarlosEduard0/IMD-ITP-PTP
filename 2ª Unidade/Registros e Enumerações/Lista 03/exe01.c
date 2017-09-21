#include <stdio.h>

typedef struct {

    int hora, minutos, segundos;
} Horario;

typedef struct {

    int dia, mes, ano;
} Data;

typedef struct {

    Horario horario;
    Data data;
    char descricao[30];
} Compromisso;

int main() {

    return 0;
}