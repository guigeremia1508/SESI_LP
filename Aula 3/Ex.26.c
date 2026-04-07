#include <stdio.h>
int main() {
    int n, i = 0, j;
    printf("Tamanho do quadrado: ");
    scanf("%d", &n);
    if (n > 0) {
        do {
            j = 0;
            do {
                printf("* ");
                j++;
            } while (j < n);
            printf("\n");
            i++;
        } while (i < n);
    }
    return 0;
}
