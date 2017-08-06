#include <stdio.h>

int main() {

    int num;
    int divisivel = 0;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    if(num % 10 == 0) {
        divisivel = 1;
        printf("%d é divisível por 10.\n", num);
    }
    if(num % 5 == 0) {
        divisivel = 1;
        printf("%d é divisível por 5.\n", num);
    }
    if(num % 2 == 0) {
        divisivel = 1;
        printf("%d é divisível por 2.\n", num);
    }
    if(!divisivel) {
        printf("%d não é divisível por 10, 5 ou 2.\n", num);
    }

    return 0;
}