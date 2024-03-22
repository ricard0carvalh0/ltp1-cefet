#include <stdio.h>

int main() {
	
    float numeros[20];
    int i;
	int pares = 0, impares = 0;
    
    printf("Digite 20 numeros reais:\n");
    
    for (i = 0; i < 20; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
        
        if ((int)numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }
    
    printf("\nQuantidade de numeros pares: %d", pares);
    printf("\nQuantidade de numeros impares: %d", impares);
    
    return 0;
}
