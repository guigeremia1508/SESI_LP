#include <stdio.h>

int main() {
    float numeros[10], soma = 0, media;

    // Leitura dos números
    for(int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    }

    // Cálculo da média
    media = soma / 10;

    printf("Média: %.2f\n", media);

    // Exibir valores maiores que a média
    printf("Valores maiores que a média:\n");
    for(int i = 0; i < 10; i++) {
        if(numeros[i] > media) {
            printf("%.2f\n", numeros[i]);
        }
    }

    return 0;
}
