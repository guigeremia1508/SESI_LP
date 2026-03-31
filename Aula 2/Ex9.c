/*
9) Número Positivo, Negativo ou Zero
Leia um número e informe se ele é:
Positivo
Negativo
Zero
*/

#include <stdio.h>

int main() {
    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    // 1B* condiC'C#o: verifica se C) maior que zero
    if (numero > 0) {
        printf("O numero %.2f e POSITIVO.\n", numero);
    }
    // 2B* condiC'C#o: se nC#o for maior que zero, verifica se C) menor
    else if (numero < 0) {
        printf("O numero %.2f e NEGATIVO.\n", numero);
    }
    // 3B* opC'C#o: se nC#o for maior nem menor, sC3 pode ser zero
    else {
        printf("O numero digitado e ZERO.\n");
    }

    return 0;
}

/* este programa ira ver se o numero digitado e negativo ou posetivo ou ZERO
*/