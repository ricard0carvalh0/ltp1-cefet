#include <stdio.h>

int main() {
	
	int numero, digito, contem = 0;
	
	printf("Digite um numero inteiro:\n");
	scanf("%d", &numero);
	
	if (numero < 0) {
		numero = -numero; 
	}
	
	while (numero > 0) {
		digito = numero % 10;
		if (digito == 3) {
			contem = 1; 
		} 
		numero = numero / 10;
	}
	
	if (contem) {
		printf("\nEsse numero contem um digito 3.");
	} else {
		printf("\nEsse numero nao contem um digito 3.");
	}
	
	return 0;
}