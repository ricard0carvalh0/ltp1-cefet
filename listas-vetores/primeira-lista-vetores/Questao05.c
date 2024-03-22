#include <stdio.h>

int main() {
	
	int inicial, razao, i;
	int pg[10];
	
	printf("Digite o numero inicial: ");
	scanf("%d", &inicial);
	
	printf("\nDigite a razao: ");
	scanf("%d", &razao);
	
	pg[0] = inicial;
	for(i = 1; i < 10; i++){
		pg[i] = pg[i - 1] * razao;
	}
	printf("\nOs termos da PG sao: ");
	for(i = 0; i < 10; i++){
		printf("%d ", pg[i]);
	}
	getchar();
	return 0;
}