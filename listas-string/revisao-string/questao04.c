#include <stdio.h>
#include <string.h>

int main() {
	
	char string[100];
	int i, quantidade = 0;
	
	printf("Digite 0's e 1's em qualquer ordem:\n");
	gets(string);
	
	for(i = 0; i < 100; i++) {
		if(string[i] == '1') {
			quantidade += 1;
		}
	}
	
	printf("Essa string contem %d 1's.", quantidade);
	
	return 0;
}