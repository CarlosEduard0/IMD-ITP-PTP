#include <stdio.h>

int somaVet(int vetor[], int tamanho) {

    int i, soma = 0;
    for(i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main() {

    int i, vetor[10];
    printf("Preencha o vetor de tamanho 10: ");
    for(i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("%d é a soma dos elementos do vetor\n", somaVet(vetor, 10));

    return 0;
}