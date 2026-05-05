#include <stdio.h>

int adicao(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int multiplicacao(int a, int b) {
    return a * b;
}

int divisao(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Erro: Divisao por zero!\n");
        return 0;
    }
}

void imprimirValores(int valor) {
    printf("Resultado: %d\n", valor);
}

int main() {
    int n1, n2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);

    printf("Digite o segundo valor: ");
    scanf("%d", &n2);

    printf("\n--- RESULTADOS ---\n");

    printf("Adicao: ");
    imprimirValores(adicao(n1, n2));

    printf("Subtracao: ");
    imprimirValores(subtracao(n1, n2));

    printf("Multiplicacao: ");
    imprimirValores(multiplicacao(n1, n2));

    printf("Divisao: ");
    imprimirValores(divisao(n1, n2));

    return 0;
}