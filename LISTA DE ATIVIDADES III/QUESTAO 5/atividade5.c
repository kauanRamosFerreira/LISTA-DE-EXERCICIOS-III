#include <stdio.h>

int main() {
    int n;
   int digito;
    printf("Digite um número: ");
    scanf("%d", &n);

    while (n > 0) {
        digito = n % 10;
        printf("%d\n", digito);
        n = n / 10;
    }

    return 0;
}
