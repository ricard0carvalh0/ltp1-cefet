#include <stdio.h>

int main() {
	
	char matriz_resposta[5][10];
	char gabarito[10];
	int resultado[5];
	int i, j;
	
	printf("Digite as respostas dos alunos:\n");
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 10; j++) {
			printf("Aluno %d - Questao %d: ", i + 1, j + 1);
			scanf(" %c", &matriz_resposta[i][j]);
		}
	}
	
	printf("\nDigite o gabarito das 10 questoes:\n");
	for(j = 0; j < 10; j++) {
		printf("Gabarito da questao %d: ", j + 1);
		scanf(" %c", &gabarito[j]);
	}
	
	for(i = 0; i < 5; i++) {
		resultado[i] = 0;
		for(j = 0; j < 10; j++) {
			if(matriz_resposta[i][j] == gabarito[j]) {
				resultado[i]++;
			}
		}
	}
	
	printf("\nResultado dos alunos:\n");
	for(i = 0; i < 5; i++) {
		printf("Aluno %d: %d\n", i + 1, resultado[i]);
	}
	
	return 0;
}