#include <stdio.h>

int main() {
	
	int vetor[10];
	int i;
	int maior_vetor = 0, valor_maior_vetor = 0;
	
	for(i = 0; i < 10; i++){
		printf("Digite um numero: ");
		scanf("%d", &vetor[i]);
		if(i == 0){
			valor_maior_vetor = vetor[i];
			maior_vetor = i + 1;
		} else
		if(vetor[i] > valor_maior_vetor){
			valor_maior_vetor = vetor[i];
			maior_vetor = i + 1;
		}
	}
	printf("\n");
	for(i = 0; i < 10; i++){
		printf("{%d} ", vetor[i]);
	}
	
	printf("\nO maior vetor eh o vetor [%d]", maior_vetor);
	printf("\nO valor do maior vetor eh: %d", valor_maior_vetor);
	
	getchar();
	return 0;
}