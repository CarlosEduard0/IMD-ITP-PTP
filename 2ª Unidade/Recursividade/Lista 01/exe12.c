#include <stdio.h>

void imprimir(int n) {

    if(n > 0) {
        imprimir(n - 1);
    }
    printf("%d ", n);
}

int main() {

    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    imprimir(n);

    printf("\n");

    return 0;
}