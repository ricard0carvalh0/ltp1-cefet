#include <stdio.h>

int main() {
	
	int cont = 0;
	float num, maiorvalor, menorvalor;
	
	while (cont < 15) {
		printf("Digite um valor real: ");
		scanf("%f", &num);
		if(cont == 0) {
			maiorvalor = num;
			menorvalor = num;
		} else 
		if(num > maiorvalor) {
			maiorvalor = num;
		} else
		if(num < menorvalor) {
			menorvalor = num;
		}
		cont++;
	}
	
	printf("\nO maior valor digitado foi: %f", maiorvalor);
	printf("\nO menor valor digitado foi: %f", menorvalor);
	
	getchar();
	return 0;
}