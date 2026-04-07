#include <stdio.h>
int main() {
    int n, s = 0;
    do {
        printf("Digite (0 para sair): ");
        scanf("%d", &n);
        s += n;
    } while (n != 0);
    printf("Total: %d\n", s);
    return 0;
}
