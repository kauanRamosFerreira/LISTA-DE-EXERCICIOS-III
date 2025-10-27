#include <stdio.h>

int main() {
    int num;
    int i = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    //verifica se o número é positivo
    if (num<= 0) {
        printf("Número inválido. Por favor, digite um número inteiro **positivo**.\n");
        return 1; //encerra o programa 
    }

    int temp = num;
    //vai contar os digitos
    while (temp > 0) {
        temp /= 10;
        i++;
    }

    printf("O número tem %d dígitos.\n", i);

    return 0;
}