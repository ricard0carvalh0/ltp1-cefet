#include <stdio.h>

int main() {
	
	float matriz1[3][2], matriz2[2][3], produto[3][3];
	int i, j, k;
	
	printf("Digite os elementos da primeira matriz (3x2):\n");
	
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 2; j++) {
			printf("Matriz1[%d][%d]:", i, j);
			scanf("%f", &matriz1[i][j]);
		}
	}
	
	printf("\nDigite os elementos da segunda mtriz (2x3):\n");
	
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 3; j++) {
			printf("Matriz2[%d][%d]:", i, j);
			scanf("%f", &matriz2[i][j]);
		}
	}
	
	printf("\nO produto dessas marizes eh:\n");
	
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			produto[i][j] = 0;
			for(k = 0; k < 2; k++) {
				produto[i][j] = produto[i][j] + matriz1[i][k] * matriz2[k][j];
			}
			printf("%.2f ", produto[i][j]);
		}
		printf("\n");
	}
	
	return 0; 
}