#include <stdio.h>

int main() {
	
	int numero[10];
	int contador, menor_elemento = 0, menor_valor = 0;
	
	for(contador = 0; contador < 10; contador++) {
		printf("Digite um numero:\n");
		scanf("%d", &numero[contador]);
		if (contador == 0){
			menor_valor = numero[contador];
			menor_elemento = contador + 1;
		} else if (numero[contador] < menor_valor) {
			menor_valor = numero[contador];
			menor_elemento = contador + 1;
		}
	}
	
	for(contador = 0; contador < 10; contador++) {
		printf("{%d} ", numero[contador]);
	}
	
	printf("\nO menor valor digitado foi: %d", menor_valor);
	printf("\nO menor elemento foi: %d", menor_elemento);
	
	return 0;
}