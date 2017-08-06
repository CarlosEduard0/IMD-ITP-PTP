#include <stdio.h>
#include <math.h>

int main() {

    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    if(num >= 0) {
        printf("A raiz quadrada de %d é: %lf.\n", num, sqrt(num));
        return 0;
    }
    printf("%d ao quadrado = %d.\n", num, num * num);
    
    return 0;
}