#include <stdio.h>

int main() {
    int matriz[3][3];
    int somalinhas, maiorvalor = 0, maiorlinha = 0;
    int i, j;

    // Ler os valores da matriz
    printf("Digite os valores da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Processar as somas das linhas
    for (i = 0; i < 3; i++) {
        somalinhas = 0;
        for (j = 0; j < 3; j++) {
            somalinhas = somalinhas + matriz[i][j];
        }

        if (somalinhas > maiorvalor) {
            maiorvalor = somalinhas;
            maiorlinha = i;
        }
    }

    // Mostrar resultado
    printf("A linha com a maior soma é a linha %d, com soma = %d\n", maiorlinha, maiorvalor);

    return 0;
}

