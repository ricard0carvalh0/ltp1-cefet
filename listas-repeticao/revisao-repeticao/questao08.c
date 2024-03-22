#include <stdio.h>

int main() {
	
	float chico = 1.50, ze = 1.10, centimetrosChico = 0.02, centimetrosZe = 0.03;
	int anos;
	
	while (ze <= chico) {
		chico = chico + centimetrosChico;
		ze = ze + centimetrosZe;
		anos++;
	}
	
	anos += 1;
	
	printf("\nAgora Chico tem %f centimetros e Ze %f centimetros.\n", chico, ze);
	printf("Esse processo de ultrapassagem demorou %d anos.", anos);
	
	return 0;
}