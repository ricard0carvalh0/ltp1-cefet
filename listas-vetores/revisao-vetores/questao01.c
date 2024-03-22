#include <stdio.h>

int main() {
	
	int numero[10];
	int contador, maior_elemento = 0, maior_valor = 0;
	
	for(contador = 0; contador < 10; contador++) {
		printf("Digite um numero:\n");
		scanf("%d", &numero[contador]);
		if (contador == 0) {
			maior_valor = numero[contador];
			maior_elemento = contador + 1;
		} else if (numero[contador] > maior_valor) {
			maior_valor = numero[contador];
			maior_elemento = contador + 1;
		}
	}
	
	for(contador = 0; contador < 10; contador++) {
			printf("{%d} ", numero[contador]);
		}
	
	printf("\nO maior valor digitado foi: %d", maior_valor);
	printf("\nO maior elemento foi: %d", maior_elemento);
	
	return 0;
}