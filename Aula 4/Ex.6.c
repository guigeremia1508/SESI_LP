#include <stdio.h>

/*
6 - Um sistema armazenou 10 números inteiros.
Crie um programa que: separe os números em pares e ímpares, 
conte quantos existem de cada tipo e exiba os dois grupos separadamente.
*/

int main() {
    int num[10], p = 0, im = 0;
    
    printf("Digite 10 numeros:\n");
    for(int i = 0; i < 10; i++) scanf("%d", &num[i]);

    printf("\nNumeros Pares: ");
    for(int i = 0; i < 10; i++) {
        if(num[i] % 2 == 0) {
            printf("%d ", num[i]);
            p++;
        }
    }
    
    printf("\nNumeros Impares: ");
    for(int i = 0; i < 10; i++) {
        if(num[i] % 2 != 0) {
            printf("%d ", num[i]);
            im++;
        }
    }
    printf("\n\nTotal Pares: %d | Total Impares: %d\n", p, im);
    return 0;
}