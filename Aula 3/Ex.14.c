#include <stdio.h>
int main() {
    int n;
    printf("Numero: "); scanf("%d", &n);
    do {
        printf("%d ", n);
        n--;
    } while (n >= 0);
    return 0;
}
