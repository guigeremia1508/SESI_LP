#include <stdio.h>
int main() {
    int senha;
    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);
        if(senha != 1234) printf("Senha Errada!\n");
    } while (senha != 1234);
    printf("Acesso Permitido!");
    return 0;
}
