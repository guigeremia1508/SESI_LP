#include <stdio.h>

/* 
1 - Um professor registrou as notas de 10 alunos em um array.
Crie um programa que: calcule a média da turma, identifique quantos 
alunos ficaram acima da média e exiba apenas as notas acima da média.
*/

int main() {
    float notas[10], soma = 0, media;
    int acima = 0;

    for(int i = 0; i < 10; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 10;
    printf("\nMedia da turma: %.2f\n", media);

    printf("Notas acima da media: ");
    for(int i = 0; i < 10; i++) {
        if(notas[i] > media) {
            printf("%.1f ", notas[i]);
            acima++;
        }
    }
    printf("\nTotal de alunos acima da media: %d\n", acima);
    return 0;
}