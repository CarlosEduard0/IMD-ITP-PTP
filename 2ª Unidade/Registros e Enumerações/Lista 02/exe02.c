#include <stdio.h>

struct Sensor {

    int numeroReferencia;
    int valorMedido;
};

void entraDados(struct Sensor *s) {

    printf("Digite o número de referência do sensor: ");
    scanf("%d", &s->numeroReferencia);

    printf("Digite o valor medido pelo sensor: ");
    scanf("%d", &s->valorMedido);
}

int main() {

    struct Sensor sen;
    entraDados(&sen);

    return 0;
}