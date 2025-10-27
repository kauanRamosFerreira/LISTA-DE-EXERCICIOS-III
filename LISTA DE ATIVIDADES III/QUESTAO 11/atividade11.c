#include <stdio.h>

int main() {
    int numeros[10];
    int contagem[10] = {0};
    int i;

    // Ler os 10 numeros (entre 0 e 9)
    printf("Digite 10 numeros entre 0 e 9:\n");
    for (i = 0; i < 10; i++) {
        do {
            printf("Numero %d: ", i + 1);
            scanf("%d", &numeros[i]);
            if (numeros[i] < 0 || numeros[i] > 9) {
                printf("Numero invalido. Tente novamente.\n");
            }
        } while (numeros[i] < 0 || numeros[i] > 9);


        contagem[numeros[i]] = contagem[numeros[i]] + 1;
    }

    // Mostrar quantas vezes cada numero apareceu
    printf("\nContagem dos numeros digitados:\n");
    for (i = 0; i < 10; i++) {
        if (contagem[i] > 0) {
            printf("Numero %d apareceu %d vez(es).\n", i, contagem[i]);
        }
    }

    return 0;
}

