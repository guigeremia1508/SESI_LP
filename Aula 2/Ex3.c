/*
3) Maior entre dois números
*/

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    if (scanf("%d", &num1) != 1) {
        printf("Erro: Digite apenas numeros inteiros.\n");
        return 1;
    }

    printf("Digite o segundo numero: ");
    if (scanf("%d", &num2) != 1) {
        printf("Erro: Digite apenas numeros inteiros.\n");
        return 1;
    }

    if (num1 > num2) {
        printf("O maior e: %d\n", num1);
    } 
    else if (num2 > num1) {
        printf("O maior e: %d\n", num2);
    } 
    else {
        printf("Os numeros sao iguais.\n");
    }

    return 0;
}

/*
este programa ira ver qual numero entre dois e o maior
*/