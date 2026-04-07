#include <stdio.h>
int main() {
    int n;
    do {
        printf("Digite um numero positivo: ");
        scanf("%d", &n);
    } while (n <= 0); // Repete se for zero ou negativo
    printf("Voce digitou: %d", n);
    return 0;
}
