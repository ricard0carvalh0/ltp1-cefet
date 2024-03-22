#include <stdio.h>

int main() {
	
	int pg[10];
	int inicial, razao, cont;
	
	printf("Digite um numero inicial:\n");
	scanf("%d", &inicial);
	printf("Digite a razao da PG:\n");
	scanf("%d", &razao);
	
	pg[0] = inicial;
	for(cont = 0; cont < 10; cont++) {
		pg[cont] = pg[cont - 1] * razao;
	}
	
	printf("\nOs termos da PG sao:\n");
	
	for(cont = 0; cont < 10; cont++) {
		printf("{%d} ", pg[cont]);
	}
	
	return 0;
}