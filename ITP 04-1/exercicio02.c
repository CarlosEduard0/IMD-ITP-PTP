#include <stdio.h>

int main() {

    int num1, num2, soma;
    printf("Digite primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);
    soma = num1 + num2;
    if(soma > 10) {
        printf("%d + %d = %d\n", num1, num2, soma);
    }
    return 0;
}