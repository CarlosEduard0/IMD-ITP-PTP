#include <stdio.h>

int main() {

    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    if(num > 20) {
        printf("O número %d é maior do que 20.\n", num);
    }
    return 0;
}