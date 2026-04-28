#include <stdio.h>
int main() {
    int mat[5][5], i, j, ss = 0;
    for(i=0; i<5; i++)
        for(j=0; j<5; j++) {
            scanf("%d", &mat[i][j]);
            if(j == 4 - i) ss += mat[i][j];
        }
    printf("%d\n", ss);
    return 0;
}
