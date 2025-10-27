#include <stdio.h>
#include <string.h>

int main() {
    char palavra[44];
    int i, tamanho;
    int palindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra); 

    tamanho = strlen(palavra); // verifica o tamanho da palavra 

    for (i = 0; i < tamanho / 2; i++) {
        if (palavra[i] != palavra[tamanho - 1 - i]) {
            palindromo = 0; // achou diferença → não é palíndromo
            break;
        }
    }

    if (palindromo)
        printf("A palavra '%s' é um palíndromo.\n", palavra);
    else
        printf("A palavra '%s' não é um palíndromo.\n", palavra);

    return 0;
}