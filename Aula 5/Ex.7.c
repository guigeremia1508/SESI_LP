#include <stdio.h>

int main() {
    float num, soma = 0, media;

    for(int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &num);
        soma += num;
    }

    media = soma / 10;

    printf("A média dos valores é: %.2f\n", media);

    return 0;
}