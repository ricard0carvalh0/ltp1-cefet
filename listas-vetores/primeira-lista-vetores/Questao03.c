#include <stdio.h>

int main() {
	
	int vetor[10];
	int i;
	int valor_maior_vetor = 0, valor_menor_vetor = 0, maior_vetor = 0, menor_vetor = 0;
	
	for(i = 0; i < 10; i++){
		printf("Digite um numero: ");
		scanf("%d", &vetor[i]);
		if(i == 0){
			valor_maior_vetor = vetor[i];
			maior_vetor = i + 1;
			valor_menor_vetor = vetor[i];
			menor_vetor = i + 1;
		} else
		if(vetor[i] > valor_maior_vetor){
			valor_maior_vetor = vetor[i];
			maior_vetor = i + 1;
		} else
		if(vetor[i] < valor_menor_vetor){
			valor_menor_vetor = vetor[i];
			menor_vetor = i + 1;
		}
	}
	printf("\n");
	for(i = 0; i < 10; i++){
		printf("{%d} ", vetor[i]);
	}
	
	printf("\nO maior vetor eh o vetor [%d]", maior_vetor);
	printf("\nO valor do maior vetor eh: %d", valor_maior_vetor);
	printf("\nO menor vetor eh o vetor [%d]", menor_vetor);
	printf("\nO valor do menor vetor eh: %d", valor_menor_vetor);
	
	getchar();
	return 0;
}