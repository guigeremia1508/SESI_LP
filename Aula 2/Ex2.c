/* 2) Leia um número inteiro e informe se ele é par ou ímpar. 
*/

#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Par\n");
    } else {
        printf("Impar\n");
    }

    return 0;
}

/* Neste programa voce ira ver se um numero e inteiro e par ou impar.
*/