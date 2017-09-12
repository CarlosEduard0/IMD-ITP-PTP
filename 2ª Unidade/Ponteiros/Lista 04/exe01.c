#include <stdio.h>

int main() {

    int x = 1, *px = &x;
    float y = 2, *py = &y;
    char z = 'c', *pz = &z;

    printf("Variável\tEndereço\tValor\t\tTamanho\n");
    printf("x:\t\t%p\t%d\t\t%ld\n", &x, x, sizeof(x));
    printf("px:\t\t%p\t%p\t%ld\n", &px, px, sizeof(px));
    printf("y:\t\t%p\t%.0f\t\t%ld\n", &y, y, sizeof(y));
    printf("py:\t\t%p\t%p\t%ld\n", &py, py, sizeof(py));
    printf("z:\t\t%p\t%c\t\t%ld\n", &z, z, sizeof(z));
    printf("pz:\t\t%p\t%p\t%ld\n", &pz, pz, sizeof(pz));

    return 0;
}