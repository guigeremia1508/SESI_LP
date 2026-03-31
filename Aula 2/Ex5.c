/*
5) Cálculo de Desconto
Leia o valor de uma compra:
Se for maior que R$100 → desconto de 10%
Caso contrário → desconto de 5%
Exiba o valor final.
*/

#include <stdio.h>


int main() {
    float valorCompra, desconto, valorFinal;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);

    // Regra: Se maior que 100, 10%. Caso contrário, 5%.
    if (valorCompra > 100.0) {
        desconto = valorCompra * 0.10; // 10% de desconto
    } 
    else {
        desconto = valorCompra * 0.05; // 5% de desconto
    }

    valorFinal = valorCompra - desconto;

    printf("---------------------------\n");
    printf("Valor original: R$ %.2f\n", valorCompra);
    printf("Desconto aplicado: R$ %.2f\n", desconto);
    printf("Valor final a pagar: R$ %.2f\n", valorFinal);
    printf("---------------------------\n");

    return 0;
}
/* sistema para ver valor do desconto*/