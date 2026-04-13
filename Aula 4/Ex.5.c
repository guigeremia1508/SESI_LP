#include <stdio.h>

/*
5 - Um sistema registrou a temperatura de 7 dias consecutivos.
Crie um programa que: calcule a média das temperaturas, identifique o 
dia mais quente e o mais frio e informe quantos dias ficaram acima da média.
*/

int main() {
    float temp[7], soma = 0, media, maior, menor;
    int acima = 0;

    for(int i = 0; i < 7; i++) {
        printf("Temp dia %d: ", i + 1);
        scanf("%f", &temp[i]);
        soma += temp[i];
        if(i == 0) { maior = menor = temp[i]; }
        if(temp[i] > maior) maior = temp[i];
        if(temp[i] < menor) menor = temp[i];
    }

    media = soma / 7;
    for(int i = 0; i < 7; i++) {
        if(temp[i] > media) acima++;
    }

    printf("\nMedia: %.1f", media);
    printf("\nMais Quente: %.1f", maior);
    printf("\nMais Frio: %.1f", menor);
    printf("\nDias acima da media: %d\n", acima);
    return 0;
}