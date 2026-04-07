#include <stdio.h>
int main() {
    int n, c = 0;
    do {
        printf("Digite: ");
        scanf("%d", &n);
        if (n >= 0) c++;
    } while (n >= 0);
    printf("Quantidade: %d\n", c);
    return 0;
}
