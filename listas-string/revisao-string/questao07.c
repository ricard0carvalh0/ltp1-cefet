#include <stdio.h>

int main() {
	
	char palavra[100];
	char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
	char caractere;
	int contador_vogais = 0;
	int contador = 0;
	int i;
	
	printf("Digite uma palavra qualquer:\n");
	gets(palavra);
	printf("\nDigite um caractere qualquer (vogal ou consoante) para colocar no lugar das vogais da palavra:\n");
	scanf("%c", &caractere);
	
	while (palavra[contador] != '\0') {
		for(i = 0; i < 5; i++) {
			if (palavra[contador] == vogais[i]) {
				contador_vogais++;
				palavra[contador] = caractere;
			}	
		}
		contador++;
	}	
	
	printf("\nExistem %d vogais nessa palavra.", contador_vogais);
	printf("\nCom a substituicao fica: %s", palavra);
	
	return 0;
}