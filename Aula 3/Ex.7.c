#include <stdio.h>
int main() {
    int i = 1, soma = 0;
    do {
        soma += i;
        i++;
    } while (i <= 10);
    printf("%d\n", soma);
    return 0;
}

