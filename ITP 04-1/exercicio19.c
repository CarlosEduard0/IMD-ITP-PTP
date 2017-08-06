#include <stdio.h>

int main() {

    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    if(num == 5) {
        printf("O número digitado é igual a 5.\n");
    } else if(num == 200) {
        printf("O número digitado é igual a 200.\n");
    } else if(num == 400) {
        printf("O número digitado é igual a 400.\n");
    }
    if(num > 500 && num < 1000) {
        printf("O número esta no intervalo de 500 a 1000.\n");
        return 0;
    }
    printf("O número nao esta no intevalo de 500 a 1000.\n");
    return 0;
}