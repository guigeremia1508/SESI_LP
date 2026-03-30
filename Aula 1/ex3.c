#include <stdio.h>

int main() {
	float n1,n2,n3,soma;
	printf("digite nota 1: ");
	scanf("%f", &n1);

	printf("digite nota 2: ");
	scanf("%f", &n2);

	printf("digite nota 3: ");
	scanf("%f", &n3);

	soma = (n1 + n2 + n3)/3;

	if(soma >=7.0) {
		printf("aprovado, sua nota é: %f", soma);
	} else if (soma <= 2.9) {
		printf("reprovado, sua nota é: %f", soma);
	} else {
		printf("Recupercao, sua nota é: %f", soma);
	}

	return 0;
}
