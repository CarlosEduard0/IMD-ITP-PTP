#include <stdio.h>

int somarVetor(int vetor[], int cont) {

    if(cont == 9) {
        return vetor[cont];
    }
    return vetor[cont] + somarVetor(vetor, ++cont);
}

int main() {

    int i;
    int vetor[10];
    
    printf("Digite os valores para preencher o vetor: ");
    for(i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Soma vetor: %d\n", somarVetor(vetor, 0));

    return 0;
}