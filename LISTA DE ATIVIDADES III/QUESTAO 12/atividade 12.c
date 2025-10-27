#include <stdio.h>


int main(){
	int i;
	int vetor1[5];
	int vetor2 [5];
	int resultado =0;

printf("Digite os 5 valores do vetor1:\n");

for (i = 0; i < 5; i++) {
    scanf("%d", &vetor1[i]);
}
printf("Digite os 5 valores do vetor2:\n");

for (i = 0; i < 5; i++) {
    scanf("%d", &vetor2[i]);
}
for  (i = 0; i < 5; i++) {
resultado = resultado + (vetor1[i] * vetor2[i]);

}
printf("O produto escalar dos vetores é: %d\n", resultado);

return 0;
}
