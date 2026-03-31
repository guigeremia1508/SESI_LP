/* 11) Verificação de Múltiplos
Leia dois números e verifique se o primeiro é múltiplo do segundo.
*/

#include <stdio.h>
int main() {
    int n1, n2;
    printf("digite dois numeros: ");
    scanf("%d %d", &n1, &n2);
    if (n1 % n2 == 0) printf("o primeiro e multiplo do segundo\n");
    else printf("nao e multiplo\n");
    return 0;
}

/* o sistema usa o resto da divisao para saber se um numero entra no outro perfeitamente */