#include <stdio.h>

int main() {
    int num[6];
    int menor;

    printf("Digite 6 numeros:\n");

    // Leitura dos números
    for(int i = 0; i < 6; i++) {
        scanf("%d", &num[i]);
    }

    // Assume o primeiro como o menor
    menor = num[0];

    // Verifica os demais
    for(int i = 1; i < 6; i++) {
        if(num[i] < menor) {
            menor = num[i];
        }
    }

    // Resultado
    printf("O menor valor eh: %d\n", menor);

    return 0;
}