#include <stdio.h>

int soPositivo(int vetor[], int tamanho) {

    int i, valoresSubstituidos = 0;
    for(i = 0; i < tamanho; i++) {
        if(vetor[i] < 0) {
            vetor[i] = 0;
            valoresSubstituidos++;
        }
    }
    return valoresSubstituidos;
}

int main() {

    int i, vetor[10];
    printf("Preencha o vetor de tamanho 10: ");
    for(i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("Quantidade de valores negativos e substituidos: %d.\n", soPositivo(vetor, 10));

    return 0;
}