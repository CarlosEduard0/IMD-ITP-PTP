#include <stdio.h>
#include <string.h>

int ehPalindromo(char *frase, int i, int j) {

    if(i == 0) {
        return 1;
    }
    if(frase[i - 1] == frase[j - i]) {
        return ehPalindromo(frase, --i, j);
    } else {
        return 0;
    }
}

int main() {

    char *frase = "aboladaloba";

    printf("%d\n", ehPalindromo(frase, strlen(frase), strlen(frase)));

    return 0;
}