#include <stdio.h>

int main() {

    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    if(num > 0) {
        printf("%d é positivo.\n", num);
        return 0;
    } else if(num == 0) {
        printf("%d é nulo.\n", num);
    } else {
        printf("%d é negativo.\n", num);    
    }
    
    return 0;
}