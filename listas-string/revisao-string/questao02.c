#include <stdio.h>

int main() {
	
	char string[100];
	int tamanho = 0;
	
	printf("Digite um string qualquer:\n");
	scanf("%[^\n]", string); 
	
	while (string[tamanho] != '\0') {
		tamanho++;
	}
	
	printf("\nO comprimento da string eh (contando os espacos): %d", tamanho);
	
	return 0;
}