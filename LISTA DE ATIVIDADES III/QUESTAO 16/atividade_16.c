#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;
    int somaLinha1, somaLinha2, somaLinha3;
    int somaColuna1, somaColuna2, somaColuna3;
    int diagPrincipal, diagSecundaria;

    // Leitura da matriz
    printf("Digite os numeros da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
        printf("Digite o numero [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibe a matriz de forma organizada
    printf("\nMatriz digitada:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d", matriz[i][j]); 
        }
        printf("\n"); 
    }

    // Calcula a soma das linhas
    somaLinha1 = matriz[0][0] + matriz[0][1] + matriz[0][2];
    somaLinha2 = matriz[1][0] + matriz[1][1] + matriz[1][2];
    somaLinha3 = matriz[2][0] + matriz[2][1] + matriz[2][2];
    //Calcula soma das colunas 
    somaColuna1 = matriz[0][0] + matriz[1][0] + matriz[2][0];
    somaColuna2 = matriz[0][1] + matriz[1][1] + matriz[2][1];
    somaColuna3 = matriz[0][2] + matriz[1][2] + matriz[2][2];
     //Calcula as diagonais 
    diagPrincipal = matriz[0][0] + matriz[1][1] + matriz[2][2];
    diagSecundaria = matriz[0][2] + matriz[1][1] + matriz[2][0];

    // Verifica se é quadrado mágico
    if (somaLinha1 == somaLinha2 &&
        somaLinha2 == somaLinha3 &&
        somaLinha3 == somaColuna1 &&
        somaColuna1 == somaColuna2 &&
        somaColuna2 == somaColuna3 &&
        somaColuna3 == diagPrincipal &&
        diagPrincipal == diagSecundaria) {
        printf(" A matriz é um quadrado magico\n");
    } else {
        printf("\ A matriz nao é um quadrado magico.\n");
    }

    return 0;
}