#include <stdio.h>

int main() {

    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    if(num % 5 == 0) {
        printf("%d é divisível por 5.\n", num);
        return 0;
    }
    printf("%d não é divisível por 5.\n", num);
    
    return 0;
}