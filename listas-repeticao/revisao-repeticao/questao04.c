#include <stdio.h>

int main() {
    int dominos[][2] = {
        {0, 0}, {0, 1}, {0, 2}, {0, 3}, {0, 4}, {0, 5}, {0, 6},
        {1, 1}, {1, 2}, {1, 3}, {1, 4}, {1, 5}, {1, 6},
        {2, 2}, {2, 3}, {2, 4}, {2, 5}, {2, 6},
        {3, 3}, {3, 4}, {3, 5}, {3, 6},
        {4, 4}, {4, 5}, {4, 6},
        {5, 5}, {5, 6},
        {6, 6}
    };

    int numDominos = sizeof(dominos) / sizeof(dominos[0]);
    int sum = 0;
    int i = 0;

    while (i < numDominos) {
        if (dominos[i][0] == 4 || dominos[i][1] == 4) {
            sum += 4;
        }
        i++;
    }

    printf("A soma de todos os numeros 4 no domino eh: %d\n", sum);

    return 0;
}

