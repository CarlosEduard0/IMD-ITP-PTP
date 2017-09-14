#include <stdio.h>

int buscaVet(int vetor[10], int valor) {

    int i;
    for(i = 0; i < 10; i++) {
        if(vetor[i] == valor) {
            return 1;
        }
    }
    return 0;
}

int main() {

    int i, vetor[10], valor;
    printf("Preencha o vetor de tamanho 10: ");
    for(i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("Digite o valor que deseja procurar no vetor: ");
    scanf("%d", &valor);
    if(buscaVet(vetor, valor)) {
        printf("O elemento %d pertence ao vetor.\n", valor);
    } else {
        printf("O elemento %d não pertence ao vetor.\n", valor);
    }

    return 0;
}