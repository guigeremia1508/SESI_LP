#include <stdio.h>
int main() {
    int n, i = 1, div = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    do {
        if (n % i == 0) div++;
        i++;
    } while (i <= n);
    if (div == 2) printf("E primo");
    else printf("Nao e primo");
    return 0;
}

