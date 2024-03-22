#include <stdio.h>

int main() {
    int numeros[10];
    int contador = 0;
    
    printf("Digite 10 numeros diferentes:\n");

    while (contador < 10) {
        int numero;
        int repetido = 0;

        printf("Digite o %do numero: ", contador + 1);
        scanf("%d", &numero);

        for (int i = 0; i < contador; i++) {
            if (numeros[i] == numero) {
                repetido = 1;
                break;
            }
        }

        if (!repetido) {
            numeros[contador] = numero;
            contador++;
        } else {
            printf("Numero repetido. Digite outro numero.\n");
        }
    }

    printf("\nVetor final:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}

