#include <stdio.h>
int main() {
    int a, b;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);
    int i = a + 1;
    do { if(i < b) printf("%d\n", i); i++; } while (i < b);
    return 0;
}