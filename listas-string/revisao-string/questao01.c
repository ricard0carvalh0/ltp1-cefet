#include <stdio.h>
#include <string.h>

int main() {
	
	char string[100];
	
	printf("Digite uma string qualquer:\n");
	gets(string);
	
	printf("\nVoce digitou:\n");
	printf("%s", string);
	
	return 0;
}