#include <stdio.h>

int s(int n) {

    if(n == 0) {
        return n;
    }
    return ((1 + (n * n)) / n) + s(n - 1);
}

int main() {

    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    printf("Resultado da soma = %d\n", s(n));

    return 0;
}