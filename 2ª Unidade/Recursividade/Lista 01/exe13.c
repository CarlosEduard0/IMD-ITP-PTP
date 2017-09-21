#include <stdio.h>

void imprimir(int n) {

    if(n < 0) {
        return;
    }
    printf("%d ", n);
    imprimir(n - 1);
}

int main() {

    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    imprimir(n);

    printf("\n");

    return 0;
}