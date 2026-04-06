/* 18) Verificação de Ano de Eleição
Leia um ano e informe se é ano de eleição (múltiplo de 4).
*/

#include <stdio.h>

int main() {
    int ano;
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (ano % 4 == 0) {
        printf("E ano de eleicao.\n");
    } else {
        printf("Nao e ano de eleicao.\n");
    }

    return 0;
}
// RESUMO: O programa usa o operador de resto (%) para verificar se o ano é divisível por 4, indicando se é ano eleitoral.