#include <stdio.h>

int divisao(int dividendo, int divisor, int *ptr) {

    *ptr = dividendo % divisor;
    return dividendo / divisor;
}

int main() {

    int dividendo, divisor, resto;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &dividendo, &divisor);
    int d = divisao(dividendo, divisor, &resto);
    printf("Resultado: %d Resto: %d\n", d, resto);

    return 0;
}