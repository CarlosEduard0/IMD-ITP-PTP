#include <stdio.h>

void reverte_numero(int num) {

    int digito;
    while(num > 0) {
         digito = num % 10;
         printf("%d", digito);
         num /= 10;
    }
    printf("\n");
}

int main() {

    int num;
    scanf("%d", &num);
    reverte_numero(num);

    return 0;
}