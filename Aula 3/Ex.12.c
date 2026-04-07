#include <stdio.h>
int main() {
    int i = 1, c = 0;
    do {
        if (i % 2 == 0) c++;
        i++;
    } while (i <= 50);
    printf("Total de pares: %d\n", c);
    getchar(); return 0;
}

