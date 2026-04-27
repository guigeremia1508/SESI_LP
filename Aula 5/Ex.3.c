#include <stdio.h>

int main() {
    int num[8];
    int soma = 0;

    printf("Digite 8 numeros:\n");

    // Leitura dos números
    for(int i = 0; i < 8; i++) {
        scanf("%d", &num[i]);
        soma += num[i]; // já vai somando
    }

    // Resultado
    printf("A soma dos valores eh: %d\n", soma);

    return 0;
}