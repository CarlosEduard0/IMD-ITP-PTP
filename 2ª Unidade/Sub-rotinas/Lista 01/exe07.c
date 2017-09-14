#include <stdio.h>

int maiorElemento(int vetor[10]) {

    int i, maior = vetor[0];
    for(i = 0; i < 10; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

int main() {

    int i, vetor[10];
    printf("Preencha o vetor de tamanho 10: ");
    for(i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("%d é o maior elemento do vetor\n", maiorElemento(vetor));

    return 0;
}