#include <stdio.h>

int potencia(int k, int n) {

    if(n == 0) {
        return 1;
    }
    return k * potencia(k, n - 1);
}

int main() {

    int num, num2;
    
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num, &num2);

    printf("%d elevado a %d = %d\n", num, num2, potencia(num, num2));

    return 0;
}