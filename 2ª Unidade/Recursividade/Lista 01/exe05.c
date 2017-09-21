#include <stdio.h>

int somatorio(int n) {

    if(n == 0) {
        return n;
    }
    return n + somatorio(n - 1);
}

int main() {

    int num;
    
    printf("Digite um número inteiro para ser calculado o seu somatório: ");
    scanf("%d", &num);

    printf("Somatório de 1 até %d: %d\n", num, somatorio(num));

    return 0;
}