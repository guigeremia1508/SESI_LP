/*7) Verificação de Triângulo
Leia três valores e verifique se podem formar um triângulo.
Caso formem, classifique como:
Equilátero
Isósceles
Escaleno*/

#include <stdio.h>

int main() {
    float a, b, c;

    printf("--- VERIFICADOR DE TRIANGULOS ---\n");
    printf("Digite o lado A: ");
    scanf("%f", &a);
    printf("Digite o lado B: ");
    scanf("%f", &b);
    printf("Digite o lado C: ");
    scanf("%f", &c);

    // 1. Verifica se os lados podem formar um triângulo
    if (a + b > c && a + c > b && b + c > a) {
        printf("\n[SISTEMA]: Os valores formam um triangulo!\n");

        // 2. Classificação
        if (a == b && b == c) {
            printf("Tipo: EQUILATERO (Todos os lados iguais)\n");
            printf("Status: Aura Geometrica Perfeita.\n");
        } 
        else if (a == b || a == c || b == c) {
            printf("Tipo: ISOSCELES (Dois lados iguais)\n");
            printf("Status: Aura Equilibrada.\n");
        } 
        else {
            printf("Tipo: ESCALENO (Todos os lados diferentes)\n");
            printf("Status: Aura Caotica (cada lado pro seu lado).\n");
        }
    } 
    else {
        printf("\n[ERRO]: Esses valores NAO formam um triangulo.\n");
        printf("Status: Voce tentou criar uma forma impossivel. Loss de aura.\n");
    }

    printf("----------------------------------\n");

    return 0;
}