#include <stdio.h>

int main() {
	
	int vetor[20];
	int i, soma_par = 0, soma_impar = 0;
	
	for(i = 0; i < 20; i++){
		printf("Digite um numero: ");
		scanf("%d", &vetor[i]);
		if(vetor[i] % 2 == 0){
			soma_par = soma_par + 1;
		} else
		if(vetor[i] % 2 != 0){
			soma_impar = soma_impar + 1;
		}
	}
	printf("\n");
	for(i = 0; i < 20; i++){
		printf("{%d} ", vetor[i]);
	}
	
	printf("\nExistem %d numeros pares nos valores fornecidos.", soma_par);
	printf("\nExistem %d numero impares nos valores fornecidos.", soma_impar);
	
	getchar();
	return 0;
}