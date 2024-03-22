#include <stdio.h>

int main() {
	
	int matriz[3][3], multiplicado[3][3];
	int i, j;
	
	printf("Digite os elementos da matriz (3x3):\n");
	
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("Matriz[%d][%d]:", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\nMultiplicando cada elemento por 5:\n");
	
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			multiplicado[i][j] = matriz[i][j] * 5; 
			printf("%d ", multiplicado[i][j]);
		}
		printf("\n");
	}
}