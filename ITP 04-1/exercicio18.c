#include <stdio.h>

int main() {

    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    if(num > 20 && num < 90) {
        printf("%d esta entre 20 e 90.\n", num);
        return 0;
    }
    printf("%d não esta entre 20 e 90.\n", num);

    return 0;
}