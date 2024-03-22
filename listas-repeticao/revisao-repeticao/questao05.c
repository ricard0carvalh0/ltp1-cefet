#include <stdio.h>

int main() {
	
	float valor, contador = 0, media = 0, valorTotal;
	
	while (valor >= 0) {
		printf("Digite um valor:\n");
		scanf("%f", &valor);
		contador++;
		
		valorTotal = valorTotal + valor;
		media = valorTotal / contador;
	}
	
	printf("\nA media de todos os valores positivos digitados eh: %.2f", media);
	
	return 0;
}