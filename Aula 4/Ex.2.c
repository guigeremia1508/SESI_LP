#include <stdio.h>

/*
2 - Uma pesquisa coletou a idade de 15 pessoas.
Desenvolva um programa que: classifique as idades em: jovem (até 17), 
adulto (18–59) e idoso (60+) e informe qual grupo possui maior quantidade.
*/

int main() {
    int idades[15], jovem = 0, adulto = 0, idoso = 0;

    for(int i = 0; i < 15; i++) {
        printf("Idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);

        if(idades[i] <= 17) jovem++;
        else if(idades[i] <= 59) adulto++;
        else idoso++;
    }

    printf("\nJovens: %d | Adultos: %d | Idosos: %d", jovem, adulto, idoso);
    
    if(jovem >= adulto && jovem >= idoso) printf("\nMaior grupo: Jovens\n");
    else if(adulto >= idoso) printf("\nMaior grupo: Adultos\n");
    else printf("\nMaior grupo: Idosos\n");
    
    return 0;
}