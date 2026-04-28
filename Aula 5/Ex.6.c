#include <stdio.h>

int main() {
    int num[10];
    int positivos = 0;

    printf("Digite 10 numeros:\n");

    // Leitura e contagem
    for(int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);

        if(num[i] > 0) {
            positivos++;
        }
    }

    // Resultado
    printf("Quantidade de numeros positivos: %d\n", positivos);

    return 0;
}