#include <stdio.h>

int main() {
	
	int numero, i, primo = 1;
	
	printf("Digite um numero inteiro:\n");
	scanf("%d", &numero);
	
	if(numero <= 1) {
		primo = 0; 
	}
	
	for (i = 2; i * i <= numero; i++) {
		if (numero % i == 0) {
			primo = 0; 
			break;
		}
	}
	
	if (primo) {
		printf("\n%d eh um numero primo.", numero);
	} else {
		printf("\n%d nao eh um numero primo.", numero);
	}
	
	return 0;	
}