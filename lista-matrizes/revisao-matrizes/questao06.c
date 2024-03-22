#include <stdio.h>

int main() {
	
	int matriz[4][4];
	int i, j, maior_linha, maior_coluna;
	int maior_valor = 0;
	
	printf("Digite os elementos da matriz (4x4):\n");
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			printf("Matriz[%d][%d]:", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);
			
			if(matriz[i][j] > maior_valor) {
				maior_valor = matriz[i][j];
				maior_linha = i + 1;
				maior_coluna = j + 1;
			}
		}
	}
		
	for(i = 0; i < 4; i++) {
		for(j =0; j < 4; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMaior elemento digitado foi: %d", maior_valor);
	printf("\nNa posicao: [%d][%d]", maior_linha, maior_coluna);
	
	return 0;
}