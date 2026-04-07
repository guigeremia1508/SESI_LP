#include <stdio.h>
int main() {
    int id, s = 0, c = 0;
    do {
        printf("Idade (0 p/ sair): ");
        scanf("%d", &id);
        if (id > 0) { s += id; c++; }
    } while (id != 0);
    if (c > 0) printf("Media: %.2f\n", (float)s/c);
    return 0;
}
