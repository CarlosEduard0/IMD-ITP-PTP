#include <stdio.h>

int inverterVetor(int *vetor, int n) {

    if(n == 50) {
        return 0;
    }
    int aux = vetor[99 - n];
    vetor[99 - n] = vetor[n];
    vetor[n] = aux;
    return inverterVetor(vetor, n + 1);
}

int main() {

    int i;
    int vetor[100];

    for(i = 0; i < 100; i++) {
        vetor[i] = i + 1;
    }

    inverterVetor(vetor, 0);
    
    for(i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}