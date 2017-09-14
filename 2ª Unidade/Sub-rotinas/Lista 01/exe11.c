#include <stdio.h>

float mediaVetor(int vetor[10]) {

    int i;
    float media = 0;
    for(i = 0; i < 10; i++) {
        media += vetor[i];
    }
    return media /= 10;
}

int main() {

    int i, vetor[10];
    printf("Preencha o vetor de tamanho 10: ");
    for(i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("%.2f é a média do vetor de 10 elementos.\n", mediaVetor(vetor));

    return 0;
}