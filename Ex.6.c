#include <stdio.h>
int main() {
    int mat[4][4], i, j, ma, me;
    for(i=0; i<4; i++)
        for(j=0; j<4; j++) {
            scanf("%d", &mat[i][j]);
            if(i==0 && j==0) ma = me = mat[i][j];
            if(mat[i][j] > ma) ma = mat[i][j];
            if(mat[i][j] < me) me = mat[i][j];
        }
    printf("%d %d\n", ma, me);
    return 0;
}

