#include <stdio.h>

int fatorialDuplo(int n) {

    if(n == 1) {
        return 1;
    }
   return n * fatorialDuplo(n - 2); 
}

int main() {

    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if(n % 2 == 0) {
        return 0;
    }

    printf("Fatorial duplo de %d = %d\n", n, fatorialDuplo(n));

    return 0;
}