#include <stdio.h>

int main() {
	
	float matriz1[2][3], matriz2[2][3], soma[2][3];
	int i, j;;
	
	printf("Digite os elementos da primeira matriz (2x3):\n");
	
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 3; j++) {
			printf("Matriz1[%d][%d]:", i, j);
			scanf("%f", &matriz1[i][j]);
		}
	}
	
	printf("\nDigite os elementos da segunda matriz (2x3):\n");
	
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 3; j++) {
			printf("Matriz2[%d][%d]:", i, j);
			scanf("%f", &matriz2[i][j]);
		}
	}
	
	printf("\nSoma das duas matrizes:\n");
	
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 3; j++) {
			soma[i][j] = matriz1[i][j] + matriz2[i][j];
			printf("%.2f ", soma[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}