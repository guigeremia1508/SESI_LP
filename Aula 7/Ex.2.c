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
        printf("Erro\n");
        return 0;
    }
}

void imprimirValores(int valor) {
    printf("\nResultado: %d \n", valor);
}


int main() {
    int n1, n2, opcao;

    do {
        printf("\n CALCULADORA \n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        
        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro valor: ");
            scanf("%d", &n1);
            printf("Digite o segundo valor: ");
            scanf("%d", &n2);
        }

        switch (opcao) {
            case 1:
                imprimirValores(adicao(n1, n2));
                break;
            case 2:
                imprimirValores(subtracao(n1, n2));
                break;
            case 3:
                imprimirValores(multiplicacao(n1, n2));
                break;
            case 4:
                imprimirValores(divisao(n1, n2));
                break;
            case 0:
                printf("Saindo do programa\n");
                break;
            default:
                printf(" tente novamente.\n");
        }

    } while (opcao != 0); 

    return 0;
}