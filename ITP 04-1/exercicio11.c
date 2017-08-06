#include <stdio.h>

int main() {

    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    if(num % 3 == 0 && num % 7 == 0) {
        printf("%d é divisível por 3 e por 7.\n", num);
        return 0;
    }
    printf("%d não é divisível por 3 e por 7.\n", num);
    
    return 0;
}