#include <stdio.h>

int main() {
    int num[5];

    printf("Digite 5 numeros:\n");

    // Leitura dos números
    for(int i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }

    // Exibição dos números
    printf("Os valores digitados foram:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", num[i]);
    }

    return 0;
}