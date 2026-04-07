#include <stdio.h>

int main() {
    int n, maior;

    printf("Digite numeros (999 para sair):\n");
    scanf("%d", &n);
    maior = n; 

    if (n != 999) {
        do {
            if (n > maior && n != 999) {
                maior = n;
            }
            scanf("%d", &n);
        } while (n != 999);

        printf("O maior numero digitado foi: %d\n", maior);
    }

    return 0;
}
