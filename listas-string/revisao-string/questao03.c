#include <stdio.h>

int main() {
    char nomeCompleto[100];
    char nome[50];
    char sobrenome[50];
    int i, j;
    int espacoEncontrado = 0;

    printf("Digite o nome completo: ");
    fgets(nomeCompleto, sizeof(nomeCompleto), stdin);

    for (i = 0; nomeCompleto[i] != '\0'; i++) {
        if (nomeCompleto[i] == ' ') {
            espacoEncontrado = 1;
            j = 0; 

            for (i = i + 1; nomeCompleto[i] != '\n'; i++) {
                sobrenome[j] = nomeCompleto[i];
                j++;
            }
            sobrenome[j] = '\0';

            break;
        }
        nome[i] = nomeCompleto[i];
    }
    nome[i] = '\0';

	printf("Sobrenome: %s\n", sobrenome);
    printf("Nome: %s\n", nome);

    return 0;
}
