#include <stdio.h>

int fibonacci(int n) {

    if(n == 0) {
        return 0;
    }
    if(n == 1 || n == 2) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {

    int num;
    printf("Digite um número para ser retornado o N-ésimo termo da sequência de fibonacci: ");
    scanf("%d", &num);

    printf("%d termo da sequência: %d\n", num, fibonacci(num));

    return 0;
}