/* 20) Sistema de Multa de Trânsito
Leia a velocidade de um carro:
Até 60 km/h -> sem multa
61–80 -> multa leve
81–100 -> multa grave
Acima de 100 -> multa gravíssima
*/

#include <stdio.h>

int main() {
    int vel;
    printf("Velocidade detectada (km/h): ");
    scanf("%d", &vel);

    if (vel <= 60) {
        printf("Sem multa.\n");
    } else if (vel <= 80) {
        printf("Multa Leve.\n");
    } else if (vel <= 100) {
        printf("Multa Grave.\n");
    } else {
        printf("Multa Gravissima!\n");
    }

    return 0;
}
// RESUMO: O código compara a velocidade com os limites legais para determinar e exibir a gravidade da infração.