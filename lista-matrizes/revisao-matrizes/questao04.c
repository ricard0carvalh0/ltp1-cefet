#include <stdio.h>

int main() {
    int vetor[3];
    int matriz[3][3];
    int resultado[3] = {0};

    printf("Digite os elementos do vetor (3 elementos):\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite os elementos da matriz (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            resultado[j] += vetor[i] * matriz[i][j];
        }
    }

    printf("\nResultado da multiplicacao do vetor pelas colunas da matriz:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0;
}
