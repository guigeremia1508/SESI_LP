#include <stdio.h>
int main() {
    int mat[5][5], i, j;
    for(i=0; i<5; i++)
        for(j=0; j<5; j++) {
            scanf("%d", &mat[i][j]);
            if(mat[i][j] < 0) mat[i][j] = 0;
        }
    for(i=0; i<5; i++) {
        for(j=0; j<5; j++) printf("%d ", mat[i][j]);
        printf("\n");
    }
    return 0;
}
