#include <stdio.h>

int menorElemento(int vetor[], int i, int menor) {

    if(i == 0) {
        return menor;
    }
    if(vetor[i - 1] < menor) {
        menor = vetor[i - 1];
    }

    return menorElemento(vetor, --i, menor);
}

int main() {

    int vetor[5] = {10, 6, 8, 987, 4};
    printf("Menor elemento do vetor: %d\n", menorElemento(vetor, 5, 10000));

    return 0;
}