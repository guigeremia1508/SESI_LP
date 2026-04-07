#include <stdio.h>
int main() {
    int op;
    do {
        printf("\n1-Ola\n2-Tudo bem?\n3-Sair\nEscolha: ");
        scanf("%d", &op);
        if(op == 1) printf("Ola!\n");
        else if(op == 2) printf("Tudo bem?\n");
    } while (op != 3);
    return 0;
}
