#include <stdio.h>

int qntValoresNegativos(int vetor[10]) {

    int i, qntNegativos = 0;
    for(i = 0; i < 10; i++) {
        if(vetor[i] < 0) {
            qntNegativos++;
        }
    }
    return qntNegativos;
}

int main() {

    int i, vetor[10];
    printf("Preencha o vetor de tamanho 10: ");
    for(i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("Quantidade de valores negativos no vetor: %d\n", qntValoresNegativos(vetor));

    return 0;
}