#include <stdio.h>

void c() {
    //1
    char c = 'z';
    char *cp = &c;

    printf("cp is %p\n\n", cp);
    printf("The number at cp is %c\n", *cp);

    cp = cp + 1;
    printf("cp is %p\n", cp);
}

void i() {
    //2
    int c = 10;
    int *cp = &c;

    printf("cp is %p\n\n", cp);
    printf("The number at cp is %d\n", *cp);

    cp = cp + 1;
    printf("cp is %p\n", cp);
}

void d() {
    //3
    double c = 10;
    double *cp = &c;

    printf("cp is %p\n\n", cp);
    printf("The number at cp is %.0lf\n", *cp);

    cp = cp + 1;
    printf("cp is %p\n", cp);
}

int main() {

    c();
    i();
    d();

    return 0;
}