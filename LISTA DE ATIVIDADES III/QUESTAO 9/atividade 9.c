#include <stdio.h>

int main() {
    int numeros[8];
    int i, j, temp;

    // Leitura dos números
    printf("Digite 8 numeros:\n");
    for (i = 0; i < 8; i++) {
        scanf("%d", &numeros[i]);
    }

    // Ordenação decrescente
    for (i = 0; i < 8; i++) {
        for (j = i + 1; j < 8; j++) {
            if (numeros[i] < numeros[j]) {
                temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    // Exibição do resultado
    printf("Numeros em ordem decrescente:\n");
    for (i = 0; i < 8; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}