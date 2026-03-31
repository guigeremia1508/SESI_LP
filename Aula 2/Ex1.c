/*
          SISTEMA DE CLASSIFICAÇÃO DE IDADE 

   Regras:
   - Criança: 0 a 12 anos
   - Adolescente: 13 a 17 anos
   - Adulto: 18 a 59 anos
   - Idoso: 60+ anos
====================================================
*/

#include <stdio.h>
int idade; //idade das pessoas
int main(){
    printf("digite sua idade: ");
    scanf("%d", &idade);
    
    if (idade <= 0) {
        printf("Voce deve estar mentindo.\n");
    }
    else if (idade <= 12) {
        printf("clasificacao: Criança\n");
    }
    else if (idade <= 17){
        printf("clasificacao: Adolecente\n");
    }
    else if (idade <= 59){
        printf("clasificacao: Adulto\n");
    }
    else {
        printf("clasificacao: Idoso\n");
    
    }

    return 0;

}

/*
    Este programa ira ver a idade da pessoa e informara a sua idade
*/