#include <stdio.h>
#include <math.h>

int main() {

    int num1, num2;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);
    if(num1 > num2) {
        printf("%d ao quadrado = %d.\n", num2, num2 * num2);
        printf("A raiz quadrada de %d = %.2lf.\n", num1, sqrt(num1));
        return 0;
    }
    printf("%d ao quadrado = %d.\n", num1, num1 * num1);
    printf("A raiz quadrada de %d = %.2lf.\n", num2, sqrt(num2));

    return 0;
}