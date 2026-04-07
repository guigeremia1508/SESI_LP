#include <stdio.h>
int main() {
    int n, i;
    long f = 1;
    printf("Fatorial de: ");
    scanf("%d", &n);
    i = n;
    do { if(n > 0) f *= i; i--; } while (i > 0);
    printf("Resultado: %ld\n", f);
    return 0;
}