#include <stdio.h>

int menorElemento(int vetor[10]) {

    int i, menor = vetor[0];
    for(i = 0; i < 10; i++) {
        if(vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    return menor;
}

int main() {

    int i, vetor[10];
    printf("Preencha o vetor de tamanho 10: ");
    for(i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("%d é o menor elemento do vetor\n", menorElemento(vetor));

    return 0;
}