#include <stdio.h>

int main() {
    char frase[100];
    int contador = 0;
    int i = 0;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    while (frase[i] != '\0') {
        if (frase[i] == ' ') {
            contador++;
        }
        i++;
    }

    printf("A frase possui %d espacos em branco.\n", contador);

    return 0;
}
