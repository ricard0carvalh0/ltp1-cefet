#include <stdio.h>

int main() {
	
	char palavra[100];
	int tamanho = 0;
	int i;
	
	printf("Digite uma palavra qualquer:\n");
	scanf("%s", palavra);
	
	while (palavra[tamanho] != '\0') {
		tamanho++;
	}
	
	printf("Palavra invertida:\n");
	for(i = tamanho - 1; i >= 0; i--) {
		printf("%c", palavra[i]);
	}
	
	return 0;
}