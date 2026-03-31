#include <stdio.h>

int main() {
    float peso, altura_cm, altura_m, imc;

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);

    printf("Digite a altura em centimetros (ex: 175): ");
    scanf("%f", &altura_cm);

    // Converte centímetros para metros (ex: 175 -> 1.75)
    altura_m = altura_cm / 100;

    // Cálculo do IMC usando a altura em metros
    imc = peso / (altura_m * altura_m);

    printf("\nSeu IMC e: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
    } 
    else if (imc <= 24.9) {
        printf("Classificacao: Normal\n");
    } 
    else if (imc <= 29.9) {
        printf("Classificacao: Sobrepeso\n");
    } 
    else {
        printf("Classificacao: Obesidade\n");
    }

    return 0;
}