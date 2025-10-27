#include <stdio.h>


int main () {
    int numeros[10];
    int naorepetidos;
    int i;
    int j;
    int cont = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    for (i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (numeros[i] == numeros[j]) {
                cont++;
            }
        }
        if (cont == 1) {
        
            printf("Número não repetido: %d\n", numeros[i]);
        }
    }
return 0;    
}