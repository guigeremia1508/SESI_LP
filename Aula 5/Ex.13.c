#include <stdio.h>

int main() {
    int v[100], i, j, n;
    int cont, maiorCont = 0;
    int moda = 0;

    printf("Quantos elementos? ");
    scanf("%d", &n);


    for(i = 0; i < n; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &v[i]);
    }

   
    for(i = 0; i < n; i++) {
        cont = 0;

        for(j = 0; j < n; j++) {
            if(v[i] == v[j]) {
                cont++;
            }
        }

        if(cont > maiorCont) {
            maiorCont = cont;
            moda = v[i];
        }
    }

    printf("\nNúmero mais repetido: %d", moda);
    printf("\nFrequência: %d vezes\n", maiorCont);

    return 0;
}