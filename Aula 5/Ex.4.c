#include <stdio.h>

int main() {
    int num[6];
    int maior;

    printf("Digite 6 numeros:\n");

    // Leitura dos números
    for(int i = 0; i < 6; i++) {
        scanf("%d", &num[i]);
    }

    // Assume o primeiro como o maior
    maior = num[0];

    // Verifica os demais
    for(int i = 1; i < 6; i++) {
        if(num[i] > maior) {
            maior = num[i];
        }
    }

    // Resultado
    printf("O maior valor eh: %d\n", maior);

    return 0;
}