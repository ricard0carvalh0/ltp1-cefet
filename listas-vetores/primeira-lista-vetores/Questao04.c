#include <stdio.h>

int main() {
	
	int inicial, razao, i;
	int pa[10];
	
	printf("Digite o numero inicial: ");
	scanf("%d", &inicial);
	
	printf("Digite a razao: ");
	scanf("%d", &razao);
	
	for(i = 0; i < 10; i++){
		pa[i] = inicial + i * razao;
	}
	printf("\nOs termos da PA sao: ");
	for(i = 0; i < 10; i++){
		printf("%d ", pa[i]);
	}
	getchar();
	return 0;
}