#include <stdio.h>

int inverter(int n) {

    if(n == 0) {
        return n;
    }
    printf("%d", n % 10);
    return inverter(n / 10);
}

int main() {

    int num;
    printf("Digite um número para ser invertido: ");
    scanf("%d", &num);

    printf("%d invertido: ", num);
    inverter(num);
    printf("\n");

    return 0;
}