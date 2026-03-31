/* 14) Classificação de Nota com Conceito
Leia uma nota de 0 a 10 e classifique:
A (>= 9)
B (7 – 8.9)
C (5 – 6.9)
D (< 5)
*/

#include <stdio.h>
int main() {
    float nota;
    printf("Como foi na prova? Digite sua nota (0 a 10): ");
    scanf("%f", &nota);

    if (nota >= 9) printf("Incrível! Voce tirou um Conceito A.\n");
    else if (nota >= 7) printf("Muito bem! Seu conceito e B.\n");
    else if (nota >= 5) printf("Voce esta no Conceito C. Da para melhorar!\n");
    else printf("Poxa, seu conceito foi D. Precisa estudar mais, hein?\n");
    return 0;
}

/* o sistema recebe a nota e mostra a letra correspondente ao desempenho do aluno */