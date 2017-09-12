#include <stdio.h>

void foo1(int xval) {
    int x;
    x = xval;
    printf("%p\t%d\n", &x, x);
}

void foo2(int dummy) {
    int y;
    y = dummy;
    printf("%p\t%d\n", &y, y);
}

int main() {

    foo1(7);
    foo2(11);

    return 0;
}