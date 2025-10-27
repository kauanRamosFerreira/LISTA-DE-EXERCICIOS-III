#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int numeros[50];
    int unicos[50];
    int i, j, repetido, tamanho_unicos = 0;

    srand(time(NULL));


    for (i = 0; i < 50; i++) {
        numeros[i] = rand() % 100 + 1;
    }


    printf("Array original:\n");
    for (i = 0; i < 50; i++) {
        printf("%d ", numeros[i]);
    }

    // Criar o array de números únicos
    for (i = 0; i < 50; i++) {
        repetido = 0;

        // Verifica se o número esta no array de únicos
        for (j = 0; j < tamanho_unicos; j++) {
            if (numeros[i] == unicos[j]) {
                repetido = 1;
                break;
            }
        }

        // Se não estiver vai ser adicionado
        if (!repetido) {
            unicos[tamanho_unicos] = numeros[i];
            tamanho_unicos++;
        }
    }

 
    printf("Array sem repetidos:\n");
    for (i = 0; i < tamanho_unicos; i++) {
        printf("%d ", unicos[i]);
    }

    printf("\n");

    return 0;
}
