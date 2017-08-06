#include <stdio.h>

int main() {

    int num1, num2;
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);
    if(num1 > num2) {
        printf("%d é maior do que %d.\n", num1, num2);
        return 0;
    }
    printf("%d é menor do que %d.\n", num1, num2);
    
    return 0;
}