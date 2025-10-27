#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N;
    int i;
    int opcao;
    int *numeros;
    int somapares = 0, somaimpares = 0;

    srand(time(NULL)); // numeros aleatorios

    printf("Deseja inserir a quantidade de numeros manualmente (1) ou gerar aleatoriamente (2)? ");
    scanf("%d", &opcao);

    if(opcao == 1) {
        printf("digite a quantidade de numeros desejada: ");
        scanf("%d", &N);
    }
    else if (opcao == 2){
        N = rand() %100 + 1;
        printf ("Quantidade gerada: %d\n", N);
    }
    else {
        printf("opcao invalida no programa");
        return 1;
    }

    printf("---------------------------------------------------------------------------------------------------");

    if (N <=0) {
        printf("numero invalido para o programa");
        return 1;
    }

    numeros = (int *) malloc(N * sizeof(int)); //aloca o vetor com o tamanho necessario
    if (numeros == NULL) { // verifica se deu certo
        printf("Erro ao alocar memoria");
        return 1;
    }

    for (i = 0; i < N; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            somapares += numeros[i];
        } else {
            somaimpares += numeros[i];
        }
    }

    printf("\nNumeros digitados: ");
    for (i = 0; i < N; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\nSoma dos pares: %d\n", somapares);
    printf("Soma dos impares: %d\n", somaimpares);

    free(numeros); // libera memoria no final

    return 0;
}
