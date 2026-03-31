/* 13) Operação Matemática
Leia dois números e uma operação (+, -, *, /).
Realize a operação e exiba o resultado.
*/

#include <stdio.h>
int main() {
    float v1, v2;
    char op;
    printf("Calculadora pronta! Digite o primeiro numero, o sinal (+,-,*,/) e o segundo numero: ");
    scanf("%f %c %f", &v1, &op, &v2);

    if (op == '+') printf("A soma deu: %.2f\n", v1 + v2);
    else if (op == '-') printf("A subtracao deu: %.2f\n", v1 - v2);
    else if (op == '*') printf("A multiplicacao deu: %.2f\n", v1 * v2);
    else if (op == '/') {
        if(v2 != 0) printf("A divisao deu: %.2f\n", v1 / v2);
        else printf("Opa, nao da para dividir por zero!\n");
    }
    return 0;
}

/* esse software funciona como uma calculadora que identifica o sinal e faz a conta certa */