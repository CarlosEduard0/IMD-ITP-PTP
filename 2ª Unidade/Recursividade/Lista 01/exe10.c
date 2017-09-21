#include <stdio.h>

int contar(int n, int k, int cont) {

    if(n == 0) {
        return cont;
    }
    if(n % 10 == k) {
        return contar(n / 10, k, ++cont);
    }
    return contar(n / 10, k, cont);
}

int main() {

    int n, k;
    printf("Digite um número natural n e um dígito k: ");
    scanf("%d %d", &n, &k);

    printf("O dígito %d aparece %d vezes.\n", k, contar(n, k, 0));

    return 0;
}