/* 15) Verificação de Maioridade para Votação
Leia a idade e informe:
Não pode votar (< 16)
Voto opcional (16–17 ou > 70)
Voto obrigatório (18–70)
*/

#include <stdio.h>
int main() {
    int idade;
    printf("Quantos anos voce tem? ");
    scanf("%d", &idade);

    if (idade < 16) printf("Voce ainda e muito jovem e nao pode votar.\n");
    else if (idade >= 18 && idade <= 70) printf("Ja e adulto! Seu voto e obrigatorio.\n");
    else printf("O seu voto e opcional. Voce escolhe se quer ir as urnas!\n");
    return 0;
}

/* o programa verifica a idade e diz se a pessoa e obrigada ou nao a votar */