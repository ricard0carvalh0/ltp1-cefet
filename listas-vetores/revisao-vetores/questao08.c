#include <stdio.h>

int main() {
	
	int numeros[50];
	int i;
	
	for(i = 0; i < 50; i++) {
		printf("Digite um numero:");
		scanf("%d", &numeros[i]);
	}
	
	printf("\nTodos os numeros pares digitados: ");
	for(i = 0; i < 50; i++) {
		if(numeros[i] % 2 == 0) {
			printf("%d ", numeros[i]);
		}
	}
	
	printf("\nTodos os numeros impares digitados: ");
	for(i = 0; i < 50; i++) {
		if(numeros[i] % 2 != 0) {
			printf("%d ", numeros[i]);
		}
	}
	
	printf("\nTodos os numeros digitados colocados de tras para frente: ");
	for(i = 49; i >= 0; i--) {
		printf("%d ", numeros[i]);
	}
	
	return 0;
}