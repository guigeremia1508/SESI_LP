#include <stdio.h>
int main() {
    int mat[3][3], i, j, sl;
    for(i=0; i<3; i++)
        for(j=0; j<3; j++) scanf("%d", &mat[i][j]);
    for(i=0; i<3; i++) {
        sl = 0;
        for(j=0; j<3; j++) sl += mat[i][j];
        printf("%d\n", sl);
    }
    return 0;
}

