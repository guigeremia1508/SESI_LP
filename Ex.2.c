#include <stdio.h>
int main() {
    int mat[2][2], i, j, soma = 0;
    for(i=0; i<2; i++)
        for(j=0; j<2; j++) {
            scanf("%d", &mat[i][j]);
            soma += mat[i][j];
        }
    printf("%d\n", soma);
    return 0;
}
