#include <stdio.h>

int main() {
	
	int dividendo, divisor, quociente = 0, resto;
	
	printf("Digite o primeiro numero:\n");
	scanf("%d", &dividendo);
	printf("Digite o segundo numero:\n");
	scanf("%d", &divisor);
	
	resto = dividendo;
	
	while (resto >= divisor) {
		resto = resto - divisor;
		quociente++;
	}
	
	printf("\nQuociente: %d", quociente);
	printf("\nResto: %d", resto);
	
	return 0;	
}