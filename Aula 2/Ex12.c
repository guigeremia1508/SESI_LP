/* 12) Cálculo de Salário com Bônus
Leia o salário:
Se maior que 3000 → bônus de 5%
Caso contrário → bônus de 10%
Exiba o salário final.
*/

#include <stdio.h>
int main() {
    float sal;
    printf("Ola! Informe o valor do seu salario atual: R$ ");
    scanf("%f", &sal);

    if (sal > 3000) {
        printf("Boas noticias! Com o bonus de 5%%, seu novo salario e: R$ %.2f\n", sal * 1.05);
    } else {
        printf("Show! Voce recebeu um bonus de 10%%. Seu novo salario e: R$ %.2f\n", sal * 1.10);
    }
    return 0;
}

/* o programa aplica 5% ou 10% de aumento dependendo do valor do salario informado */