#include <stdio.h>

int main() {
    int num[10];

    printf("Digite 10 numeros:\n");

    // Leitura dos números
    for(int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    // Exibir apenas os pares
    printf("Numeros pares:\n");
    for(int i = 0; i < 10; i++) {
        if(num[i] % 2 == 0) {
            printf("%d ", num[i]);
        }
    }

    return 0;
}