#include <stdio.h>

int main() {
    char string[100];
    int i;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] == '0') {
            string[i] = '1';
        }
    }

    printf("String modificada: %s", string);

    return 0;
}
