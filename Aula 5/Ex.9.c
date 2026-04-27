#include <stdio.h>

int main() {
    float numeros[10];

    // Leitura dos números
    for(int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &numeros[i]);

        // Substitui negativos por zero
        if(numeros[i] < 0) {
            numeros[i] = 0;
        }
    }

    // Exibição do vetor atualizado
    printf("Valores após substituição:\n");
    for(int i = 0; i < 10; i++) {
        printf("%.2f\n", numeros[i]);
    }

    return 0;
}
