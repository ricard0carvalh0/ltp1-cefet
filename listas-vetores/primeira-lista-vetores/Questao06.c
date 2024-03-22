#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main() {
    int i, num, pos = -1;
    int vetor[TAM];
    
    srand(time(NULL));
    for (i = 0; i < TAM; i++) {
        vetor[i] = rand() % 20;
        printf("%d ", vetor[i]);
    }
    
    printf("\nDigite um número entre 0 e 20: ");
    scanf("%d", &num);
    
    for (i = 0; i < TAM; i++) {
        if (vetor[i] == num) {
            pos = i;
            break;
        }
    }
    
    if (pos == -1) {
        printf("O número %d não está no vetor.\n", num);
    } else {
        printf("O número %d está na posição %d do vetor.\n", num, pos);
    }
    
    return 0;
}
