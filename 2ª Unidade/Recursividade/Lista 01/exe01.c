#include <stdio.h>

int fatorial(int n) {

    if(n == 1) {
        return 1;
    }
    return n * fatorial(n - 1);
}

int main() {

    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    printf("Fatorial de %d: %d\n", num, fatorial(num));

    return 0;
}