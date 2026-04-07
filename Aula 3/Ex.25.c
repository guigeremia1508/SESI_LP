#include <stdio.h>
int main() {
    int v;
    printf("Valor para sacar: ");
    scanf("%d", &v);
    do {
        if(v >= 50) { printf("Nota 50\n"); v -= 50; }
        else if(v >= 20) { printf("Nota 20\n"); v -= 20; }
        else if(v >= 10) { printf("Nota 10\n"); v -= 10; }
        else if(v >= 5)  { printf("Nota 5\n");  v -= 5;  }
        else if(v >= 1)  { printf("Nota 1\n");  v -= 1;  }
    } while (v > 0);
    return 0;
}
