#include <stdio.h>

int main() {
    int num_1;
    int num_2;
    int i;

    printf("Digite o primeiro número:\n");
    scanf("%d", &num_1);

    printf("Digite o segundo número:\n");
    scanf("%d", &num_2);

    // Garante que num_1 seja o menor
    if (num_1 > num_2) {
        int temp = num_1;
        num_1 = num_2;
        num_2 = temp;
    }

    printf("Números entre %d e %d:\n", num_1, num_2);

    if (num_2 - num_1 <= 1) {
        printf("Não há números entre eles.\n");
    } else {
        for (i = num_1 + 1; i < num_2; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
