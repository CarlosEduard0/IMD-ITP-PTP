#include <stdio.h>

int fatorial(int n) {

    if(n == 1) {
        return 1;
    }
    return n * fatorial(n - 1);
}

int fatorialQuadruplo(int n) {

    return fatorial(2 * n) / fatorial(n);
}


int main() {

    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    printf("Fatorial quádruplo de %d = %d\n", n, fatorialQuadruplo(n));

    return 0;
}