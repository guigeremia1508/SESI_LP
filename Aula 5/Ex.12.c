#include <stdio.h>

int main() {
    int v[6], i;
    int maior, segundo;

  
    for(i = 0; i < 6; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &v[i]);
    }


    maior = v[0];
    segundo = v[0];

    
    for(i = 1; i < 6; i++) {
        if(v[i] > maior) {
            maior = v[i];
        }
    }

    
    for(i = 0; i < 6; i++) {
        if(v[i] != maior) {
            if(v[i] > segundo || segundo == maior) {
                segundo = v[i];
            }
        }
    }

    printf("\nMaior: %d", maior);
    printf("\nSegundo maior: %d\n", segundo);

    return 0;
}