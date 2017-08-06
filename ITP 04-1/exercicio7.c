#include <stdio.h>

int main() {

    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    if(num % 3 == 0) {
        printf("%d é múltiplo de 3.\n", num);
        return 0;
    }
    printf("%d não é múltiplo de 3.\n", num);
    
    return 0;
}