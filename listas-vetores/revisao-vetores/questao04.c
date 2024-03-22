#include <stdio.h>

int main() {
	
	int pa[10];
	int inicial, razao, cont;
	
	printf("Digite um numero inicial:\n");
	scanf("%d", &inicial);
	printf("Digite a razao da pa:\n");
	scanf("%d", &razao);
	
	for(cont = 0; cont < 10; cont++) {
		pa[cont] = inicial + cont * razao;
	}
	
	printf("\nOs termos da PA sao:\n");
	
	for(cont = 0; cont < 10; cont++) {
		printf("{%d} ", pa[cont]);
	}
	
	return 0;
}