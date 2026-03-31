/*
4) Verificação de Aprovação
Leia a nota de um aluno (0 a 10).
Informe:
Aprovado (nota >= 7)
Recuperação (nota entre 5 e 6.9)
Reprovado (nota < 5)
*/

#include <stdio.h>

int main() {
    float nota;

    printf("Digite a nota do aluno (0 a 10): ");
    scanf("%f", &nota);

    // 1. Aprovado (nota >= 7)
    if (nota >= 7.0) {
        printf("Resultado: APROVADO (Nota: %.1f)\n", nota);
    } 
    // 2. Recuperação (nota entre 5 e 6.9)
    else if (nota >= 5.0) {
        printf("Resultado: RECUPERACAO (Nota: %.1f)\n", nota);
    } 
    // 3. Reprovado (nota < 5)
    else {
        printf("Resultado: REPROVADO (Nota: %.1f)\n", nota);
    }

    return 0;
}
/* este sistema pegara a nota e ver sua situaca */