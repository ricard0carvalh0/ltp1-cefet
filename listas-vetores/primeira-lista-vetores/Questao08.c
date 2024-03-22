#include <stdio.h>

int main() {
	
	int vetor[50];
	int i;
	
	for(i = 0; i < 50; i++){
		printf("Digite um numero: ");
		scanf("%d", &vetor[i]);
	}
	printf("\nApenas os indices pares:\n");
	for(i = 0; i < 50; i = i + 2){
		printf("%d ", vetor[i]);
	}
	printf("\nApenas os indices impares:\n");
	for(i = 1; i <= 50; i = i + 2){
		printf("%d ", vetor[i]);
	}
	printf("\nTodo o vetor de tras para a frente:\n");
	for(i = 49; i >= 0; i = i - 1){
		printf("{%d} ", vetor[i]);
	}
	getchar();
	return 0; 
}