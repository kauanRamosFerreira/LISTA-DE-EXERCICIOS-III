#include <stdio.h>

int main (){
int numeros[10];
int i ;
    int maior, menor;
    int indice_maior = 0;
    int indice_menor = 0;


for (i = 0; i < 10; i++) {
    printf("Digite o °%d número: ", i + 1);
    scanf("%d", &numeros[i]);

}

    maior = numeros[0];
    menor = numeros[0];

    
    for (i = 1; i < 10; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
            indice_maior = i;
        }

        if (numeros[i] < menor) {
            menor = numeros[i];
            indice_menor = i;
        }
    }

    printf("Maior valor: %d (posição %d)\n", maior, indice_maior);
    printf("Menor valor: %d (posição %d)\n", menor, indice_menor);

    return 0;
}