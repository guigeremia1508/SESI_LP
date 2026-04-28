#include <stdio.h>

int main() {
    int v[10], i, j, aux;

    
    for(i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &v[i]);
    }


    for(i = 0; i < 9; i++) {
        for(j = i + 1; j < 10; j++) {
            if(v[i] > v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    printf("\nOrdem crescente:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}