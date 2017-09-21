#include <stdio.h>

int potencia(int n, int k) {

    if(k == 1) {
        return n;
    }
    return n * potencia(n, k - 1);
}

int hiperFatorial(int n) {

    if(n == 1) {
        return 1;
    }
    return potencia(n, n) * hiperFatorial(n - 1);
}

int main() {

    int n;
    printf("Digite um número inteiro n: ");
    scanf("%d", &n);

    printf("Hiper fatorial de %d = %d\n", n, hiperFatorial(n));

    return 0;
}